#include <iostream>
//bacteria takeover counter
using namespace std;

int population = 1; int hours = 0;

int main(int argc, char const *argv[])
{
    
    while(population<=1000000000)
    {
        hours++;
        population = population *2;

        cout<<"Hours passed: "<<hours;
        cout<<" number of bacteria: "<<population<<endl;
    }
    
    return 0;
}
