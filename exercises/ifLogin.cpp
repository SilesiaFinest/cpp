#include <iostream>

using namespace std;

string username, password;

int main()
{
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    if ((username == "admin") && (password == "password1"))
    {
        cout << "You have logged in!" << endl;
    }
    else
    {
        cout << "Details incorrect" << endl;
    }

    return 0;
}
