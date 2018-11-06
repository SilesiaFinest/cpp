#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "You are still a kid! You cannot be a president yet." << endl;
    }
    else if ((age>=18) && (age < 35))
    {
        cout << "You are an adult but still to young to be a president." << endl;
    }
    else
    {
        cout << "You can be a president now!" << endl;
    }

    return 0;
}
