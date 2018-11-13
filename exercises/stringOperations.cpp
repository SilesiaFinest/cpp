#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // string concatenation
    string first = "Zed is ";
    string second = "Dead, baby";

    string third = first + second;
    cout << third << endl
         << endl;

    //transform to upper & to lower
    cout << "tranform to UPPER: " << endl;
    transform(third.begin(), third.end(), third.begin(), ::toupper);
    cout << third << endl
         << endl;

    cout << "tranform to lower: " << endl;
    transform(third.begin(), third.end(), third.begin(), ::tolower);
    cout << third << endl
         << endl;

    // find a word in string
    string find = "dead";

    size_t position = third.find(find);

    if (position != string::npos)
        cout << "Found on position: " << position;
    else
        cout << "Not found!";
    cout << endl
         << endl;

    //erase (first is position, second how many chars)

    third.erase(3, 3);
    cout << third << endl
         << endl;

    //insert (from this index, what to insert)

    third.insert(4, "is ");
    third.insert(17, ", zed is dead");
    cout << third << endl
         << endl;

    //replace (from which position, how many chars to be replace, what to replace it with)

    third.replace(13, 4, "honey bunny");
    cout << third << endl
         << endl;

    //substr = take out drom string ( first position, how many chars)

    string newthird = third.substr(13, 11);
    cout << newthird << endl
         << endl;

    return 0;
}
