#include <iostream>

using namespace std;

int passByValue(int y) {
	cout << "Address of y is " << &y << endl;
	cout << "value of y is " << y << endl;
	y = 5;

	cout << "value of y after modifications is " << y << endl;
	return y;
}

int passByAddress(int* y) {
	cout << "Address of y is " << &y << endl;
	cout << "value of y is " << *y << endl;

	*y = 11;
	cout << "value of y after modifications is " << *y << endl;

	return *y;
}

int passByReference(int& y) {
	cout << "Address of y is " << &y << endl;
	cout << "value of y is " << y << endl;
	y = 15;

	cout << "value of y after modifications is " << y << endl;
	return y;
}

int main() {
	int x = 2;
	cout << "Address of x is " << &x << endl;
	cout << "value of x is " << x << endl;
	cout << endl;

	int z = 0;
	cout << "Address of z is " << &z << endl;
	cout << "value of z is " << z << endl;
	cout << endl;

	z = passByValue(x);
	cout << "After calling passByValue(), z = " << z << ", x = " << x << endl;
	cout << "Address of x is " << &x << endl;
	cout << "Address of z is " << &z << endl;
	cout << endl;

	z = passByAddress(&x);
	cout << "After calling passByAddress(), z = " << z << ", x = " << x << endl;
	cout << "Address of x is " << &x << endl;
	cout << "Address of z is " << &z << endl;
	cout << endl;

	z = passByReference(x);
	cout << "After calling passByReference(), z = " << z << ", x = " << x << endl;
	cout << "Address of x is " << &x << endl;
	cout << "Address of z is " << &z << endl;
	cout << endl;
}