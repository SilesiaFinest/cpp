#include <iostream>
using namespace std;
int uczniowie, cukierki, x, y;

int main(int argc, const char * argv[]) {
    cout << "Ilu jest ucznioiw w klasie: ";
    cin >> uczniowie;
    cout << "Ile cukierkow kupila mama: ";
    cin >> cukierki;
    x = cukierki / (uczniowie-1);
    cout << "Cukierkow dla kazdego ucznia: " << x;
    y = cukierki - x * (uczniowie-1);
    cout << endl << "Dla Jasia na wieczor: " << y << endl;
    return 0;
}
