#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstdio>

//pseudorandom numbers
using namespace std;

int number, guess, no_tries = 0;

int main(int argc, char const *argv[])
{
    cout << "Hello! I'm thinking about a number between 1 and 100. Try to guess it!" << endl;
    srand(time(NULL));
    number = rand() % 100 + 1;

    while (guess != number)
    {
        no_tries++;
        cout << "Your guess ("<<no_tries<<" try): ";
        cin >> guess;

        if (guess == number)
            cout << "You got it on " << no_tries << " try. Congratulations!" << endl;
        else if (guess < number)
            cout << "Too little, go up" << endl;
        else if (guess > number)
            cout << "Too much, go down" << endl;
    }
    getchar(); 
    
    
    return 0;
}
