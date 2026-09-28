#include <iostream>
using namespace std;

class Student
{
private:
    int id;

public:
    Student()
    {
        id = 101;
        cout << "Default Constructor : " << id << endl;
    }

    Student(int x)
    {
        id = x;
        cout << "Parameterized Constructor : " << id << endl;
    }
};

int main()
{
    Student s1;
    Student s2(200);

    return 0;
}