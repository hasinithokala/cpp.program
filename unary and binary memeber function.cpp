#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> x;
    }

    void display()
    {
        cout << "Number = " << x << endl;
    }

    // Unary - operator overloading
    void operator-()
    {
        x = -x;
    }
};

int main()
{
    Number n;

    n.getData();

    cout << "Before applying unary - operator:" << endl;
    n.display();

    -n;

    cout << "After applying unary - operator:" << endl;
    n.display();

    return 0;
}