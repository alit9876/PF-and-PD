#include <iostream>
using namespace std;
main()
{
    int arrsize;

    cout << "Enter array size :";
    cin >> arrsize;
    int number[arrsize];
    for (int index = 0; index < arrsize; index++)
    {
        cout << "ENter a number : ";
        cin >> number[index];
    }
    for (int index = 0; index < arrsize; index++)
    {
        if (number[index] == 7 || (number[index] % 10) == 7)
        {
            cout << "BOOM" << endl;
            break;
        }
        else 
        {
        cout << "NOt a BOOM" << endl;
        break;
        }
     
    }
   
    
}
