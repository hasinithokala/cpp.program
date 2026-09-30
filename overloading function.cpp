#include <iostream>
using namespace std;

class Demo
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Demo obj;

    cout << "Sum of 10 and 20 = " << obj.add(10, 20) << endl;
    cout << "Sum of 10, 20 and 30 = " << obj.add(10, 20, 30) << endl;
    cout << "Sum of 5.5 and 4.5 = " << obj.add(5.5f, 4.5f) << endl;

    return 0;
}