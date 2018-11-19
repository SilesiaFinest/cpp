#include <iostream>

using namespace std;

int how_many;

int main()
{
    cout << "How many numbers in the table: ";
    cin >> how_many;

    int *table;
    table = new int [how_many];
    
    
    for(int i = 0; i < how_many; i++)
    {
        cout<<(uintptr_t)table<<endl;
        table++;
    }
    
    delete [] table;
    return 0;
}
