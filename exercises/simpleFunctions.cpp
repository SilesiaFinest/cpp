#include <iostream>

using namespace std;

float meters;
//simple function header&body, formal argument created
float conv_inches(float m)
{
    return m * 39.37;
}
//only funcition header, body is below main
float conv_yards(float y);

//create a procedure - no return instruction
//it's result cannot be used in calculations
void conv_miles(float x)
{
    cout << "In miles: " << x * 0.0006213;
}

int main()
{
    cout << "Enter meters: ";
    cin >> meters;
    // actual argument 'meters' send to functions
    cout << "In inches: " << conv_inches(meters) << endl;
    cout << "In yards: " << conv_yards(meters) << endl;
    conv_miles(meters);
    cout << endl;
    return 0;
}

float conv_yards(float y)
{
    return y * 1.0936;
}