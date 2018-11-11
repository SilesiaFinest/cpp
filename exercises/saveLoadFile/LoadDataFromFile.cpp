#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string name, surname;
string tel_no;

int main()
{
    fstream file;
    file.open("businessCard.txt", ios::in);

    if (file.good() == false)
    {
        cout << "File does not exist!";
        exit(0);
    }

    string text_line;
    int line_no = 1;
    while (getline(file, text_line))
    {

        switch (line_no)
        {
        case 1:
            name = text_line;
            break;
        case 2:
            surname = text_line;
            break;
        case 3:
            tel_no = text_line;
            break;
        }
        line_no++;
    }

    file << name << endl;
    file << surname << endl;
    file << tel_no << endl;

    file.close();
    file.clear();

    cout << name << endl;
    cout << surname << endl;
    cout << tel_no << endl;

    return 0;
}
