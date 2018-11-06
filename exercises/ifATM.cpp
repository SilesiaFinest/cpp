#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Welcome to our bank!" << endl;
    cout << "Please enter your PIN: ";
    cin >> PIN;

    if (PIN == "1729")
    {
        cout << "PIN Correct. Thank You." << endl;
    }
    else
    {
        cout << "PIN Incorrect!" << endl;
    }

    return 0;
}
