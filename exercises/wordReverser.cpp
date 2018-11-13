#include <iostream>

using namespace std;

int main()
{
    string word;
    cout << "Enter a word to reverse: ";
    cin >> word;

    int how_long = word.length();

    for (int i = how_long - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    cout << endl;
    return 0;
}
