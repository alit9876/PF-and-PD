#include <iostream>
using namespace std;
main()
{
    int transformation;
    int arrsize = 3;

    int number[arrsize];
    for (int index = 0; index < arrsize; index++)
    {
        cout << "ENter anumber :";
        cin >> number[index];
    }
    cout << "ENter number of transformation: ";
    cin >> transformation;
    for (int index = 0; index < 3; index++)
    {
        for (int x = 0; x < transformation; x++)
        {
            if ((number[index] % 2) == 0 || number[index] == 0)
            {
                number[index] = number[index] - 2;
            }
            if ((number[index] % 2) != 0)
            {
                number[index] = number[index] + 2;
            }
        }
    }

    for (int index = 0; index < 3; index++)
    {
        cout << number[index] << " ";
    }
}