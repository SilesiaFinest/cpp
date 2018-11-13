#include <iostream>
//how to read and return full sentences after spaces
using namespace std;

int main()
{
    string sentence;
    cout << "Enter your sentence: ";

    getline(cin, sentence);

    cout << sentence << endl;

    return 0;
}
