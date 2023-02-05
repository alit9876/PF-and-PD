#include <iostream>
using namespace std;
main()
{
    int arrsize = 4;
    int store = 0;

    string dance[10] = {"Shimmy", "Shake", "Piroutte", "Slide", "BOx Step", "Headspin", "Dosado", "pop", "LOck ", "Arabesque"};
    int moves[arrsize];
    for (int index = 0; index < 4; index++)
    {
        cout << "Enter a number: ";
        cin >> moves[index];
    
    }
    for (int index = 0; index < 4; index++)
    {
        store = moves[index] + index;
        if (store > 9)
        {
            store = 0;
        }

        cout << dance[store] << " ,";
    }
}