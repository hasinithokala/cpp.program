#include <iostream>
using namespace std;

class Number
{
public:
    int num;

    void getData()
    {
        cout << "Enter Number: ";
        cin >> num;
    }

    Number add(Number n)
    {
        Number temp;
        temp.num = num + n.num;
        return temp;      // Returning object
    }

    void display()
    {
        cout << "Sum = " << num << endl;
    }
};

int main()
{
    Number n1, n2, result;

    n1.getData();
    n2.getData();

    result = n1.add(n2);

    result.display();

    return 0;
}