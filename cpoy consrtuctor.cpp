#include <iostream>
using namespace std;

class point {
	int x, y;
public:
	point(int a, int b) {
		x = a;
		y = b;
	}
	point(const point &p) {
		x = p.x;
		y = p.y;
		cout << "copy constructor called" << endl;
	}
	void show() {
		cout << "x = " << x << ", y = " << y << endl;
	}

};
int main() {
	point p1(10, 20);
	point p2 = p1;
	p1.show();
	p2.show();
	return 0;
}