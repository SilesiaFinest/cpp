#include <iostream>
//count number of hours before bacteria spread from 1 to 1000000000
using namespace std;

int population = 1;
int hours = 0;

int main()
{

    while (population <= 1000000000)
    {
        hours++;
        population = population * 2;

        cout << "Hours passed: " << hours << " number of bacteria: " << population << endl;
    }

    return 0;
}
