#include <iostream>

using namespace std;

int a,b,c;
// add new var for storing max
int m;
int main()
{
    cout<<"Enter 3 numbers separated by space: ";
    cin>>a>>b>>c;
/*   if ((a>=b) && (a>=c))
        cout <<"Max number is: "<<a;     
    if ((b>=a) && (b>=c))
        cout <<"Max number is: "<<b; 
    if ((c>=a) && (c>=b))
        cout <<"Max number is: "<<c;
*/
//better solution 
m=a;
if (b>m) m=b;
if (c>m) m=c;

cout<<"Max number is: "<<m; 
    cout <<endl;
    return 0;
}
