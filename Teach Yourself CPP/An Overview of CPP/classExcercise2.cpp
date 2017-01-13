#include <iostream>
using namespace std;

class card
{
    string title;
    string author;
    int copies;
public:
    void store(string t, string a, int c);
    void show();
};
void card::store(string t, string a, int c)
{
    title=t;
    author=a;
    copies=c;
}
void card::show()
{
    cout << "Book Name: " << title << " Author: " << author << " Available copies: " << copies ;
}
int main()
{
    card c1;
    string t, a;
    int c;
    t="Teach Yourself C++";
    a="Herbert Schildt.";
    c=150;
    c1.store(t, a, c);
    c1.show();

    return 0;

}
