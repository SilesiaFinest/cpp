#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int number;
int main(int argc, char const *argv[])
{
    cout<<"Welcome to today's lotto draw! We will start in 3 seconds";
    cout<<endl;
     usleep(3000000);
    srand(time(NULL));
    for (int i=1; i<=6; i++)
    {
        number = rand()%49+1;
        usleep(1000000);
        cout<<number<<"\a"<<endl;
    }

    return 0;
}
