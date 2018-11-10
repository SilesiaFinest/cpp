#include <iostream>
#include <iomanip>

using namespace std;

long double fib[100000];
int n;

int main()
{
    cout << "How many numbers from Fibonacci Sequence you want to see: ";
    cin >> n;

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << setprecision(10000);
    for (int i = 0; i < n; i++)
    {
        cout
            << "Sequence number " << i + 1 << ": " << fib[i] << endl;
    }
    // Highest possible sequence to print: 23601
    //cout<<endl<<"Sequence number "<<n<<": "<<fib[n-1];

    return 0;
}
