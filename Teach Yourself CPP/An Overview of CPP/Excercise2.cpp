#include <iostream>
using namespace std;

int main()
{
    int feet, inch;

    do {
        cout << "Enter feets: ";
        cin >> feet;
        cout << feet << " = " << feet*12 << " inches.\n";
    } while (feet!=0); 

    return 0;
}
