#include <iostream>

using namespace std;
//array name is pointer to its [0]
//other way to use pointers is with &
float average(float *arr, int how_many)
{
    float sum = 0;

    for (int i = 0; i < how_many; i++)
    {
        sum += *arr;
        arr++;
    }
    return sum / how_many;
}
int main()
{
    float array[3];

    array[0] = 1.5;
    array[1] = 2.3;
    array[2] = 0.75;

    cout << "Average is: " << average(array, 3) << endl;

    return 0;
}
