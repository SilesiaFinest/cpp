#include <iostream>
#include <cmath>

using namespace std;

float numbers[5], sum = 0, average, closest;

int main()
{
    cout << "Enter 5 numbers separated by space ";
    //enter numbers and print average
    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }
    average = sum / 5;
    cout << endl
         << "Average is: " << average << endl;

    //find number closest to the average
    closest = numbers[0];
   for(int i = 0; i < 5; i++)
   {
       float temp = abs(numbers[i]- average);
       float temp1 = abs(closest - average);
        if (temp <temp1) closest = numbers[i];
        else if (temp == temp1) 
        {
            if (numbers[i]<closest) closest=numbers[i];
        }
   }
   
    
    cout<<"Value closest to the average is: "<<closest<<endl;

    return 0;
}