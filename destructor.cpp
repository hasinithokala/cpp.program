#include <iostream>
using namespace std;

class Light {
public:
	Light() {
		cout << "Light turned ON" << endl;
	}
	~Light() {
		cout << "Light turned OFF" << endl;
	}
};
int main() {
	cout << "entering room" << endl;
	Light l1;
	cout << "Reading a book" << endl;
	return 0;
}