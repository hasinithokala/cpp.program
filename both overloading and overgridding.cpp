#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    // Function Overloading
    void sound()
    {
        cout << "Animal makes a sound" << endl;
    }

    void sound(string name)
    {
        cout << name << " makes a sound" << endl;
    }

    // Function to be overridden
    virtual void show()
    {
        cout << "This is Animal class" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    // Function Overriding
    void show()
    {
        cout << "This is Dog class" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;

    // Function Overloading
    cout << "Function Overloading:" << endl;
    a.sound();
    a.sound("Dog");

    // Function Overriding
    cout << "\nFunction Overriding:" << endl;
    a.show();
    d.show();

    return 0;
}