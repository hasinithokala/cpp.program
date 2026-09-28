#include <iostream>
using namespace std;

// Object as a class member
class A {
public:
    int x;

    A() {
        x = 10;
    }
};

// Pointer to class
class B {
public:
    int y;

    B() {
        y = 20;
    }

    void display() {
        cout << "Value of y = " << y << endl;
    }
};

// this pointer
class C {
    int z;

public:
    void setData(int z) {
        this->z = z;
    }

    void display() {
        cout << "Value of z = " << this->z << endl;
    }
};

// Virtual base class
class Base {
public:
    int value = 100;
};

class D : virtual public Base {
};

class E : virtual public Base {
};

class F : public D, public E {
public:
    A obj;  // Object as a class member
};

int main() {
    // 1. Object as a class member
    F f;
    cout << "Object as class member: " << f.obj.x << endl;

    // 2. Pointer to class
    B b;
    B *ptr = &b;
    ptr->display();

    // 3. this pointer
    C c;
    c.setData(30);
    c.display();

    // 4. Virtual base class
    cout << "Virtual base class value = " << f.value << endl;

    return 0;
}