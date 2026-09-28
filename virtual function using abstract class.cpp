# include <iostream>
using namespace std;

class Shape {
public:
	virtual void area() = 0;
};

class Circle : public Shape {
	float r;
	
public:
	Circle(float radius) {
		r = radius;
	}
	void area() override {
		cout << "Area of circle =" << 3.14 *r*r<< endl;
	}
};
class Rectangle : public Shape {
    float l, b;

public:
    Rectangle(float length, float breadth) {
        l = length;
        b = breadth;
    }

    void area() override {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

// Triangle class
class Triangle : public Shape {
    float b, h;

public:
    Triangle(float base, float height) {
        b = base;
        h = height;
    }

    void area() override {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(4, 5);

    c.area();
    r.area();
    t.area();

    return 0;
}

