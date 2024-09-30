// synthesized_member_special_fncs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>

using namespace std;

class Constructor_defined{
    int i;
public:
    Constructor_defined(int i) : i(i) {}
    void print() { cout << i << endl; }
};

class Copy_Constructor_defined {
    int i;
public:
    Copy_Constructor_defined(int i) : i(i) {}
    Copy_Constructor_defined(const Copy_Constructor_defined& obj) : i(obj.i) {}
    void print() { cout << i << endl; }
};

class Assignment_defined {
    int i;
public:
    Assignment_defined(int i) : i(i) {}
    Assignment_defined& operator =(const Assignment_defined& obj) { i = obj.i; }
    void print() { cout << i << endl; }
};

class Destructor_defined {
    int i;
public:
    Destructor_defined(int i): i(i){}
    Destructor_defined(const Destructor_defined& obj) : i(obj.i) {}
    Destructor_defined& operator =(const Destructor_defined& obj) { i = obj.i; }

    ~Destructor_defined() { cout << "destructor ..." << endl; }
    void print() { cout << i << endl; }
};

class No_Destructor_defined {
    int i;
public:
    No_Destructor_defined(int i) : i(i) {}
    No_Destructor_defined(const No_Destructor_defined& obj) : i(obj.i) {}
    No_Destructor_defined& operator =(const No_Destructor_defined& obj) { i = obj.i; }

    void print() { cout << i << endl; }
};

class No_Constructor_defined{
    int i;
public:
    void print() { cout << i << endl; }
};

int main()
{
    /*Test when the class has a constructor defined*/
    {
        cout << "test when a contructor defined (not a copy constructor)\n";
        Constructor_defined obj(5);
        cout << "test after contructor obj: ";
        obj.print();
        Constructor_defined obj1(7);
        cout << "test after contructor obj1: ";
        obj1.print();
        Constructor_defined obj2(obj1);
        cout << "test after copy contructor ob2: ";
        obj2.print();
        obj1 = obj;
        cout << "test after assignment operator obj1=obj: ";
        obj1.print();
    }

    cout << "\n----------------------------------------------------\n\n";

    /*Test when the class has a copy constructor defined only*/
    {
        cout << "test when a contructor defined (not a copy constructor)\n";
        Constructor_defined obj(6);
        cout << "test after contructor obj: ";
        obj.print();
        Constructor_defined obj1(8);
        cout << "test after contructor obj1: ";
        obj1.print();
        Constructor_defined obj2(obj1);
        cout << "test after copy contructor ob2: ";
        obj2.print();
        obj1 = obj;
        cout << "test after assignment operator obj1=obj: ";
        obj1.print();
    }

    cout << "\n----------------------------------------------------\n\n";

    /*Test when the class has an assignment operator defined*/
    {
        cout << "test when a contructor defined (not a copy constructor)\n";
        Constructor_defined obj(9);
        cout << "test after contructor obj: ";
        obj.print();
        Constructor_defined obj1(11);
        cout << "test after contructor obj1: ";
        obj1.print();
        Constructor_defined obj2(obj1);
        cout << "test after copy contructor ob2: ";
        obj2.print();
        obj1 = obj;
        cout << "test after assignment operator obj1=obj: ";
        obj1.print();
    }

    cout << "\n----------------------------------------------------\n\n";

    /*Test when the class has no constructor defined*/
    {
        cout << "test when a contructor defined (not a copy constructor)\n";
        No_Constructor_defined obj;
        cout << "test after contructor obj: ";
        obj.print();
        No_Constructor_defined obj1;
        cout << "test after contructor obj1: ";
        obj1.print();
        No_Constructor_defined obj2 = obj1;
        cout << "test after copy contructor ob2: ";
        obj2.print();
        obj1 = obj;
        cout << "test after assignment operator obj1=obj: ";
        obj1.print();
    }

    cout << "\n----------------------------------------------------\n\n";

    /*Test when the class has a destructor defined*/
    {
        cout << "test when a contructor defined (not a copy constructor)\n";
        Constructor_defined obj(13);
        cout << "test after contructor obj: ";
        obj.print();
        Constructor_defined obj1(15);
        cout << "test after contructor obj1: ";
        obj1.print();
        Constructor_defined obj2(obj1);
        cout << "test after copy contructor ob2: ";
        obj2.print();
        obj1 = obj;
        cout << "test after assignment operator obj1=obj: ";
        obj1.print();
    }

    cout << "\n----------------------------------------------------\n\n";

    /*Test when the class has no destructor defined*/
    {
        cout << "test when a contructor defined (not a copy constructor)\n";
        Constructor_defined obj(17);
        cout << "test after contructor obj: ";
        obj.print();
        Constructor_defined obj1(19);
        cout << "test after contructor obj1: ";
        obj1.print();
        Constructor_defined obj2(obj1);
        cout << "test after copy contructor ob2: ";
        obj2.print();
        obj1 = obj;
        cout << "test after assignment operator obj1=obj: ";
        obj1.print();
    }

    cout << "\n----------------------------------------------------\n\n";

    return 0;
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
