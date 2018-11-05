#include <iostream>

using namespace std;

string login, password;

int main()
{
    cout << "Please enter your login: ";
    cin >> login;
    cout << "Please enter your password: ";
    cin >> password;

    if ((login == "admin") && (password == "password1"))
    {
        cout << "You've logged in successfully";
    }
    else
    {
        cout << "Login Unsuccessful";
    }
    return 0;
}