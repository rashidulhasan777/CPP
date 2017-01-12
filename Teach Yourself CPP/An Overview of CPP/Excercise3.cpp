#include <iostream>
using namespace std;

int main()
{
    int a, b, d, minimum;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a>b)
        minimum=b;
    else
        minimum=a;
    for(d=2;d<minimum;d++)
        if(((a%d)==0) && ((b%d)==0)) break;
    if(d==minimum)
    {
        cout << "No common denominators\n";
        return 0;
    }
    cout << "The lowest common denominators is " << d << "\n";

    return 0;
}
