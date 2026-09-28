#include <iostream>
using namespace std;

class Add
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    friend void sum(Add);
};
void sum(Add obj)
{
    cout << "Sum = " << obj.a + obj.b << endl;
}

int main()
{
    Add obj;

    obj.getData();
    sum(obj);

    return 0;
}