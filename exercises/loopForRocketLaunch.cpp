#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 15; i > 0; i--)
    {
        usleep(1000000);
        system("clear");
        cout << i << endl;
    }
    usleep(1000000);
    system("clear");
    cout << "LAUNCH!" << endl;
    ;
    return 0;
}
