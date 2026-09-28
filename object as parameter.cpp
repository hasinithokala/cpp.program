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
};

// Function taking object as parameter
void display(Student s)
{
    cout << "\nStudent Details" << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
}

int main()
{
    Student s1;

    s1.getData();

    display(s1);   // Passing object as parameter

    return 0;
}