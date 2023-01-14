#include <iostream>
using namespace std;

main()
{
    char character;
    int x, y, h;
    cout << "Enter a height: ";
    cin >> h;
    cout << "Enter cordinate for X: ";
    cin >> x;
    cout << "Enter coordinate for Y: ";
    cin >> y;

    if ((((x >= 0) && (x <= 3 * h)) && (y == 0)) || ((x == h) && ((y >= h) && (y <= 4 * h))) || ((x == 2 * h) && ((y >= h) && (y <= 4 * h))) || (((x >= 0) && (x <= h)) && (y == h)) || (((x >= 2 * h) && (x <= 3 * h)) && (y == h)) || ((x == 0) && ((y >= 0) && (y <= h))) || ((x == 3 * h) && ((y >= 0) && (y <= h))) || (((x >= h) && (x <= 2 * h)) && (y == 4 * h)))
    {
        cout << "border ";
    }

    else if ((x < h * 3) && (y < h))
    {
        cout << "inside";
    }
    else if (((x > h) && (x < 2 * h)) && ((y > 0) && (y < 4 * h)))
    {
        cout << "inside";
    }

    else
        cout << "outside";
}
