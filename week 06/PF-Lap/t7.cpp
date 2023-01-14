#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float budget, numberofpeople;
    string type;
    float ticket, stdticket, final;
    cout << "Enter your budget = ";
    cin >> budget;
    cout << "Enter category = ";
    cin >> type;
    cout << "Enter number of people ";
    cin >> numberofpeople;

    if (type == "VIP")
    {
        if (numberofpeople >= 1 && numberofpeople <= 4)
        {
            ticket = (budget * 75 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 499.99;
            final =  ticket - stdticket;
        }
        if (numberofpeople >= 5 && numberofpeople <= 9)
        {
            ticket = (budget * 75 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 499.99;
            final =  ticket - stdticket;
        }
        if (numberofpeople >= 10 && numberofpeople <= 24)
        {
            ticket = (budget * 50 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 499.99;
           final =  ticket - stdticket;
        }
        if (numberofpeople >= 25 && numberofpeople <= 49)
        {
            ticket = (budget * 40 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 499.99;
            final =  ticket - stdticket;
        }
        if (numberofpeople >= 50)
        {
            ticket = (budget * 25 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 499.99;
            final =  ticket - stdticket;
        }
    }


    if (type == "normal")
    {
        if (numberofpeople >= 1 && numberofpeople <= 4)
        {
            ticket = (budget * 75 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 249.99;
            final =  ticket - stdticket;
        }
        if (numberofpeople >= 5 && numberofpeople <= 9)
        {
            ticket = (budget * 75 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 249.99;
            final =  ticket - stdticket;
        }
        if (numberofpeople >= 10 && numberofpeople <= 24)
        {
            ticket = (budget * 50 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 249.99;
            final =  ticket - stdticket;
        }
        if (numberofpeople >= 25 && numberofpeople <= 49)
        {
            ticket = (budget * 40 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 249.99;
            final =  ticket - stdticket;
        }
        if (numberofpeople >= 50)
        {
            ticket = (budget * 25 / 100);
            ticket = budget - ticket;
            stdticket = numberofpeople * 249.99;
            final =  ticket - stdticket;
        }
    }
    if (final > 0)
    {
        cout << "Yes! You have " << final << " QR left" << endl;
    }
    if (final < 0 )
    {
        cout << "Not enough money! You need " << abs (final) << " QR more" << endl;
    }
}