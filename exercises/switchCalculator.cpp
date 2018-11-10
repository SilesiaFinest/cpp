#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

float x, y;
int choose;

int main()
{
    for (;;)
    {
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;

        cout << endl;
        cout << "MAIN MENU" << endl;
        cout << "-----------------" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "-----------------" << endl;
        cout << "0. Exit" << endl;

        cout << "Choose: ";
        cin >> choose;
    
        switch (choose)
        {
        case 1:
            cout << "Sum = " << x + y;
            break;
        case 2:
            cout << "Difference = " << x - y;
            break;
        case 3:
            cout << "Product = " << x * y;
            break;
        case 4:
            if (y == 0)
                cout << "No dividing by 0";
            cout << "Quotient = " << x / y;
            break;
        case 0:
            exit(0);
        default:
            cout << "No such option in the menu!";
            break;
        }
        getchar();getchar();
        system("clear");
    }
    return 0;
}
