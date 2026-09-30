#include <iostream>
using namespace std;

class Person
{
public:
    class Address
    {
    public:
        string city;

        void getCity()
        {
            cout << "Enter City: ";
            cin >> city;
        }

        void display()
        {
            cout << "City: " << city << endl;
        }
    };
};

int main()
{
    Person::Address a;

    a.getCity();
    a.display();

    return 0;
}