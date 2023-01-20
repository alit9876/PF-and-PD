#include <iostream>
using namespace std;
main()
{
    int row;
    cout << "Enter desired number: ";
    cin >> row;
    for (int n = 1; n <= row; n++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
            for(int i = row; i >= row-2; row--)
            {
                cout << " ";
                cout << "*";
            }
            
            
        }
        cout << endl;
    }

   
}