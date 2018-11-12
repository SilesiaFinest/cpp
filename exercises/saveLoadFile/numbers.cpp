#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

float numbers[1000];

int main()
{
    string line;
    int line_no;

    fstream file;
    file.open("numbers.txt", ios::in);

    if (file.good()==false) cout<<"Cannot open the file";

    int counter=0;

    while(!file.eof())
    {
        getline(file, line);
        numbers[counter]=atof(line.c_str());
        counter++;
    }
    file.close();
    cout<<"Numbers count: "<<counter<<endl<<endl;
    
    for(int i = 0; i < counter; i++)
    {
        cout<<numbers[i]<<endl;
    }
    
    
    return 0;
}
