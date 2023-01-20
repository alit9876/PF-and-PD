#include <iostream>
using namespace std;
main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    for (int n=1; n <= row; n++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
            for(int j =row; j >=1; j--)
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }
}