# include <iostream>
using namespace std;
class A {
public:
	void display() {
		cout << "Base class A" << endl;
	}
};
class B: public A {
public:
	void displayB() {
		cout<< "Derived Class B"<< endl;
	}
};
int main() {
	B obj;
	obj.display();
	obj.displayB();
	return 0;
}
