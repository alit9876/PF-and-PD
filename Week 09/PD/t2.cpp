#include <iostream>
using namespace std;
main()
{
    string movie[5] = {"Gladiators", "StarWars", "Terminator", "TakingLives", "TombRider" };
    string find;
    float price;
    int count = 0;
    cout << "Enter movie name: ";
    cin >> find;
    for(int index = 0; index < 5; index++)
    {
        if(find == movie[index] )
        {
            count = index;
        }
    }
    if((count%2) != 0)
    {
        price = 500 - (500 * 5) / 100;
    }
    else
    {
        price = 500 - (500 * 10) / 100;   
    }
    cout << "Price of ticket: "<< price << endl;
}