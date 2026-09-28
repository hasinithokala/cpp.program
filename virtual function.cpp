# include <iostream>
using namespace std;
class A {
public:
	virtual void display() {
		cout << "Base class A" << endl;
	}
};
class B: public A {
public:
	void display() override {
		cout << "Derived class B" << endl;
	}
};
int main() {
    A *ptr;
    B obj;

    ptr = &obj;

    ptr->display();

    return 0;
}