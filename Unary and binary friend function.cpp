# include <iostream>
using namespace std;

class Number {
	int x;

public:
	Number(int a) {
		x = a;
	}
	friend void operator-(Number n);\
};
void operator-(Number n) {
	cout << "Negative value ="<< -n.x;
}
int main() {
	Number n(10);
	-n;
	return 0;
}
