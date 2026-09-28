#include <iostream>
using namespace std;

class A{
public:
	void showA() {
		cout<< "class A" << endl;
		
	}
};
class B{
public:
	void showB() {
		cout << " class B" << endl;
	}
};
class C : public A, public B {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}