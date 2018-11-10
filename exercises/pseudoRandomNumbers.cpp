#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int number, guess, no_tries = 0;

int main()
{
    cout << "Hello! I am thinking about a number between 1 and 100, try to guess it." << endl;
    srand(time(NULL));
    number = rand() % 100 + 1;

    while (guess != number)
    {
        no_tries++;
        cout << "Your guess (it's your " << no_tries << " try): ";
        cin >> guess;

        if (guess == number)

            cout << "That's it! You got it on " << no_tries << " try!" << endl;

        else if (guess < number)

            cout << "Too little, go up." << endl;

        else if (guess > number)

            cout << "Too much, go lower." << endl;
    }
    getchar();
    return 0;
}
