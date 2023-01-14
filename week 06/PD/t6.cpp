#include <iostream>
using namespace std;

main()
{
    string month;
    int day;
    float apartment, office, price, discount;
    cout << "Enter month: ";
    cin >> month;
    cout << "NUmber of stays: ";
    cin >> day;

    if (month == "May" || month == "October")
    {
        if (day > 7 && day <= 14)
        {
            price = day * 50;
            discount = price - (price * 5) / 100;

            cout << "Studio: " << discount  << " $" << endl;
        }
        if (day > 14)
        {
            price = day * 50;
            discount = price - (price * 30) / 100;

            cout << "Studio: " << discount  << " $"  << endl;
        }
        if (day < 7)
        {
            price = day * 50;
            cout << "Studio: " << price  << " $"  << endl;
        }

        if (day > 14)
        {
            price = day * 65;
            discount = price - (price * 10) / 100;
            cout << "Apartment: " << discount  << " $"  << endl;
        }
        else
        {
            price = day * 65;
            cout << "Apartment: " << price  << " $"  << endl;
        }
    }

    if (month == "June" || month == "September")
    {
        if (day > 14)
        {
            price = day * 75.20;
            discount = price - (price * 20) / 100;

            cout << "Studio: " << discount  << " $"  << endl;
        }
        else
        {
            price = day * 75.20;
            cout << "Studio: " << price  << " $"  << endl;
        }
        if (day > 14)
        {
            price = day * 68.70;
            discount = price - (price * 10) / 100;
            cout << "Apartment: " << discount  << " $"  << endl;
        }
        else
        {
            price = day * 68.70;
            cout << "Apartment: " << price  << " $"  << endl;
        }
    }

    if (month == "July" || month == "August")
    {

        price = day * 76;
        cout << "Studio: " << price  << " $"  << endl;

        if (day > 14)
        {
            price = day * 77;
            discount = price - price * 0.1;
            cout << "Apartment: " << discount  << " $"  << endl;
        }
        else
        {
            price = day * 77;
            cout << "Apartment: " << price  << " $"  << endl;
        }
    }
}