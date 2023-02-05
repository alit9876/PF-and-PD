#include <iostream>
using namespace std;
main()
{
    int arrsize = 4;
    string input [arrsize];
    for (int index = 0; index < 4; index ++)
    {
        cout << "ENter a string :";
        cin >> input [index];
    }
    if ((input[0] == input[1]) && (input[1] == input[2]) && (input[2] == input[3]))
    {
        cout << "True"<< endl;
    }
    else
    cout << "FAlse" << endl; 
}