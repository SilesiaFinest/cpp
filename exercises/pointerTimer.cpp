#include <iostream>
#include <time.h>
#include <cstdlib>
//try with number > 100000000 
using namespace std;

int how_many;
clock_t start, stop;
double elapsed;

int main()
{
    cout << "How many numbers in the table: ";
    cin >> how_many;
    // start with creating array table
    int *table;
    table = new int[how_many];
    //get cup clock
    start = clock();
    //create table, write then read, add 50 and write
    for (int i = 0; i < how_many; i++)
    {
        table[i] = i;
        table[i] += 50;
    }
    stop = clock(); //get cpu clock again
    elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
    //cpu clocks difference / per sec
    cout << "Write time (without pointer): " << elapsed << endl;
    delete[] table; //clear the array

    int *point = table; //create pointer for [0]
    table = new int[how_many];

    start = clock();

    for (int i = 0; i < how_many; i++)
    {
        *point = i;
        *point += 50;
        point++;
    }

    stop = clock(); 
    elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
    
    cout << "Write time (with pointer): " << elapsed << endl;

    delete[] table;

    return 0;
}
