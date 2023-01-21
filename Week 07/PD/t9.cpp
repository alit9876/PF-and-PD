#include <iostream>
using namespace std;
main()
{
    int row;
    cout << "Enter desired number: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int s = i + 1; (s <= row * 2 - i); s++)
        {
            cout << " ";
        }

        for (int t = (row - i); t < row; t++)
        {
            cout << "*";
        }
        cout << endl;
    }
}