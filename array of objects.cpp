#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s[3];   // Array of 3 objects

    cout << "Enter Student Details\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\nStudent Details\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].display();
    }

    return 0;
}