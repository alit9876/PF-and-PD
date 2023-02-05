#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price [4] = {60, 70, 40, 30};
    int kgs, fprice;
    string findfruit;
    cout << "Enter fruit you want to buy:";
    cin >> findfruit;
    cout << "Enter quantity:";
    cin >> kgs;
    for (int index = 0; index < 4; index++)
    {
        if (findfruit == fruit[index])
        {
        fprice = kgs * price [index]; 

        }
    }
    cout << "Price = " << fprice << endl;
}