#include <iostream>

using namespace std;

float grades[5], total = 0, average;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Enter your " << i + 1 << " grade: ";
        cin >> grades[i];
        total += grades[i];
    }
    average = total / 5;
    cout << endl
         << "Average of your grades is: " << average << endl;

    return 0;
}
