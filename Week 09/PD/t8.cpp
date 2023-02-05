#include <iostream>
using namespace std;
main()
{
    int arrsize;
    cout << "Enter number of pencils:";
    cin >> arrsize;
    int color;
    int swit = 0;
    int finaltime;
    string pencils[arrsize];

    for (int index = 0; index < arrsize; index++)
    {
        cout << "Enter color name:";
        cin >> pencils[index];
    }
    color = 2 * arrsize;
    for (int index = 0; index < arrsize; index++)
    {
        if (pencils[index] != pencils[index + 1])
        {
            swit = swit +1;
        }
        if (pencils[index] == pencils[index + 1])
        {
            swit = swit;
        }
    }
    swit--;
    finaltime = color + swit;
    cout << finaltime;
}