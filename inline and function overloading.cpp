#include <iostream>
using namespace std;

class Demo
{
public:
    inline int square(int x)
    {
        return x * x;
    }

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Demo d;

    cout << "Square = " << d.square(5) << endl;
    cout << "Addition of 2 numbers = " << d.add(10,20) << endl;
    cout << "Addition of 3 numbers = " << d.add(10,20,30) << endl;

    return 0;
}