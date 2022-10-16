#include<iostream>
using namespace std;
int main()
{
    char ch;
    float a,r, s, L, W, B, H;
    do
    {
        cout << "Enter shape type\n";
        cout << "Enter C or c for circle\n";
        cout << "Enter S or s for square\n";
        cout << "Enter T or t for triangle\n";
        cout << "Enter R or r  for rectangle\n";
        cin >> ch;
    } while (!(ch == 'C' || ch == 'c' || ch == 'S' || ch == 's' || ch == 'T' || ch == 't' || ch == 'R' || ch == 'r'));

    switch (ch)
    {
    case'C':
    case'c':
        cout << "enter radius of circle ";
        cin >> r;
        a = 3.14 * r * r;
        cout << "area of circle is " << a;
        break;
    case'S':
    case's':
        cout << "enter side of square";
        cin >> s;
        cout << "the area of square  is " << s * s;
        break;
    case'R':
    case'r':
        cout << "enter the length and width of rectangle\n";
        cin >> L >> W;
        cout << "the area of rectangle " << L * W;
        break;
    case'T':
    case't':
        cout << "enter base and height of triangle ";
        cin >> B >> H;
        a = 0.5 * (B * H);
        cout << "the area of triangle is " << a;

    }

}