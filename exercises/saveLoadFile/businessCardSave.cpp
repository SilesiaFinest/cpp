#include <iostream>
#include <fstream>

using namespace std;

string name, surname;
string tel_no;

int main()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your surname: ";
    cin >> surname;
    cout << "Enter your phone number: ";
    cin >> tel_no;

    fstream file;
    file.open("businessCard.txt", ios::out | ios::app);

    file << name << endl;
    file << surname << endl;
    file << tel_no << endl;

    file.close();
    file.clear();

    return 0;
}
