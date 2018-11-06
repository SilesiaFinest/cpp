#include <iostream>
//everyone gets equal amount of sweets, the rest is for you
using namespace std;

int students, sweets, x, y;

int main()
{
    cout << "How many kieds in your class: ";
    cin >> students;
    cout << "How many candies you've got: ";
    cin >> sweets;
    x = sweets / (students - 1);
    cout << "Candies for each kid: " << x << endl;
    y = sweets - x * (students - 1);
    cout << "Sweets left for you: " << y << endl;
    return 0;

}

