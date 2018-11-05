#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "How old are you: ";
    cin >> age;

    if (age < 18)
    {
        cout << "You are still a child! You cannot be a president yet";
    }
    else if ((age >= 18) && (age < 35))
    {
        cout << "You are an adult but still too young to be a president";
    }
    else
    {
        cout << "You are an adult and you can be a president";
    }
    return 0;
}