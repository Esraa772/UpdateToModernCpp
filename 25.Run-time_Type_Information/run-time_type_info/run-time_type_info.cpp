// run-time_type_info.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Base {
public:
    virtual ~Base() {}
};
class Derived : public Base {
public:
    void derived_func() { cout << "Calling derived_func()\n"; }
};

int main()
{
    {
        Derived derived;

        Base* pBase = &derived;

        if (typeid(*pBase) == typeid(derived))
            cout << "pBase points to a Derived object \n";
        else
            cout << "pBase doesn't point to a Derived object \n";

        const type_info& tBase = typeid(*pBase);
        const type_info& tDerived = typeid(derived);

        cout << "Dynamic type of pBase is " << tBase.name() << endl;
        cout << "Dynamic type of derived is " << tDerived.name() << endl;
    }
    {

        Derived d;
        Base* pBase = &d;

        Derived* pDerived = dynamic_cast<Derived*>(pBase);

        // Dangerous!
        pDerived->derived_func();
    }

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
