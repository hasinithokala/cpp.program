#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Maximum of integers: " << maximum(10, 20) << endl;
    cout << "Maximum of floats: " << maximum(10.5, 5.5) << endl;
    
    return 0;
}

