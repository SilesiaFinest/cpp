#include <iostream>
#include <unistd.h>
#include <cstdlib>
// 15 sec countdown before launch
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 15; i > 0; i--)
    {
        usleep(1000000);
        system("clear");
        cout << i << endl;
    }
    usleep(1000000);
    system("clear");
    cout << "Launch!!";
    return 0;
}
