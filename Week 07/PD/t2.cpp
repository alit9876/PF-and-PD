#include <iostream>
using namespace std;
main()
{
    int row;
    cout << "Enter desired number of rows: ";
    cin >> row;
    for (int n=1; n <=row; n++)
    {
        for (int j=row;j >= n; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}