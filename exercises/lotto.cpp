#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int number;

int main()
{
    cout << "Welcome to today's Lotto draw. We will start in 3 seconds." << endl;
    usleep(3000000);
    srand(time(NULL));

    for (int i = 1; i <= 6; i++)
    {
        number = rand() % 49 + 1;
        usleep(1000000);
        cout << number << "\007" << endl;
    }

    return 0;
}
