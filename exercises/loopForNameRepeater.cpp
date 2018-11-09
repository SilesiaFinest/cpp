#include <iostream>

using namespace std;

int number;
string name;

int main()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter positive integer: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << i << ". " << name << endl;
    }

    return 0;
}
