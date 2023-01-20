#include <iostream>
using namespace std;
void uper(int row);
void lower(int row);
main()
{
    int row;
    cout << "Enter desird rows = ";
    cin >> row;
    uper(row);
    lower(row);
}

void uper(int row)
{
    for (int n = 1; n <= row; n++)
    {
        for (int j = n; j <= row-1; j++)
        {
            cout << " ";
        }
        for (int s = 1; s <= n; s++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lower(int row)
{
    for (int n = row; n >= 1; n--)
    {

        for (int j = row -n; j >= 1; j--)
        {
            cout << " ";
        }
        for (int s = 1; s <= n; s++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}

