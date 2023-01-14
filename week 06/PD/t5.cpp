#include <iostream>
using namespace std;
main()
{
    string day, fruit;
    float quantity, price;

    cout << "Enter required fruit name: ";
    cin >> fruit;
    cout << "Enter day of the week: ";
    cin >> day;
    cout << "Enter required quantity: ";
    cin >> quantity;

    if (day == "Sunday" || day == "Saturday")
    {
        if (fruit == "banana")
        {
            price = 2.70 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "apple")
        {
            price = 1.25 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "orange")
        {
            price = 0.90 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "grapefruit")
        {
            price = 1.60 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "kiwi")
        {
            price = 3.00 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "pineapple")
        {
            price = 5.60 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "grapes")
        {
            price = 4.20 * quantity;
            cout << "price: " << price << endl;
        }
    }

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "apple")
        {
            price = 1.20 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "orange")
        {
            price = 0.85 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "grapefruit")
        {
            price = 1.45 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "kiwi")
        {
            price = 2.70 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "pineapple")
        {
            price = 5.50 * quantity;
            cout << "price: " << price << endl;
        }

        if (fruit == "grapes")
        {
            price = 3.85 * quantity;
            cout << "price: " << price << endl;
        }
    }

 
}