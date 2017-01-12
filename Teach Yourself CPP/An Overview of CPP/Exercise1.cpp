#include <iostream>
using namespace std;

int main()
{
    int hour, wage;

    cout << "Enter hours: ";
    cin >> hour;
    cout << "Enter wage: ";
    cin >> wage;

    cout << "Gross pays: " << hour*wage;

    return 0;
}
