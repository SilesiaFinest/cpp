#include <iostream>

using namespace std;

string name;
int number;

int main(int argc, char const *argv[])
{
    cout << "What's your name: ";
    cin >> name;
    cout << "Insert a positive integer: ";
    cin >> number;
    
    if (number <= 0) 
    {
        cout << "A positive integer!";
    }
    else 
    {
        for (int i = 1; i <= number; i++)
        {
            cout << i << ". " << name << endl;
        }
    }
        return 0;
}
