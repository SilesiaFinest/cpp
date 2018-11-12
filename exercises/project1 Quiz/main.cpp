#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

string topic, nick;
string content[5];
string answA[5], answB[5], answC[5], answD[5];
string correct[5];
string answer;
int score = 0;

int main()
{
    int line_no = 1;
    string line;
    int q_no = 0;

    fstream file;
    file.open("quiz.txt", ios::in);
    if (file.good() == false)
    {
        cout << "Failed to open the file!";
        exit(0);
    }
    while (getline(file, line)) 
    {

        switch (line_no)
        {
        case 1:
            topic = line;
            break;
        case 2:
            nick = line;
            break;
        case 3:
            content[q_no] = line;
            break;
        case 4:
            answA[q_no] = line;
            break;
        case 5:
            answB[q_no] = line;
            break;
        case 6:
            answC[q_no] = line;
            break;
        case 7:
            answD[q_no] = line;
            break;
        case 8:
            correct[q_no] = line;
            break;
        default:
            break;
        }
        if (line_no == 8)
        {
            line_no = 2;
            q_no++;
        }
        line_no++;
    }
    file.close();

    cout << topic << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << endl
             << content[i] << endl;
        cout << "A. " << answA[i] << endl;
        cout << "B. " << answB[i] << endl;
        cout << "C. " << answC[i] << endl;
        cout << "D. " << answD[i] << endl;

        cout << "Your answer: ";
        cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

        if (answer == correct[i])
        {
            cout << "Correct! You get one point!" << endl;
            score++;
        }

        else
        {
            cout << "Wrong! No point for you! Correct answer was: " << correct[i] << endl;
        }
    }
    cout << endl
         << "That's the end! Your score: " << score;

    return 0;
}
