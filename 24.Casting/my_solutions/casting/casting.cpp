// casting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>

using namespace std;

class Base {
public:
	virtual ~Base() {}
};
class Derived : public Base {
public:
	void derived_func() { cout << "Calling derived_func()\n"; }
};

void print(char* str) {       // Doesn't mutate str, but not declared const
	cout << str << endl;
}

struct bitmap_file_header {
	char header[2]{ 'B', 'M' };
	int32_t file_size;
	int32_t reserved{ 0 };
	int32_t data_offset;
};

int main() {
	
	{
		int c = 'A';
		cout << c << endl;
		cout << (char)c << endl;
	}
	/*static_cast*/
	{
		int c = 'A';
		cout << c << endl;
		cout << static_cast<char>(c) << endl;
	}

	/*const_cast*/
	{
		const char* msg = "Hello, world!";
		//print(msg);               // Error - invalid conversion
		print(const_cast<char*>(msg));
	}

	/*reinterpret_cast*/
	{
		bitmap_file_header file_header{ /*...*/ };             // Data structure in bitmap format

		ofstream file("img.bmp", ios::out | ios::binary);         // Open output file in binary mode

		if (file) {
			// Cast data to stream of untyped bytes
			file.write(reinterpret_cast<char*>(&file_header), sizeof(file_header));
			//...
		}
	}

	/*dynamic_cast*/
	{
		Derived d;
		Base* pBase = &d;

		Derived* pDerived = dynamic_cast<Derived*>(pBase);

		// Dangerous!
		pDerived->derived_func();
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
