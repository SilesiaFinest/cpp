#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Welcome in our bank!" << endl;
    cout << "Please inster your PIN: ";
    cin >> PIN;

    if (PIN == "1729")
    {
        cout << "PIN Correct";
    }
    else 
    {
        cout <<"Incorrect PIN!";
    }

    return 0;
}