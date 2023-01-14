#include <iostream>
using namespace std;
main()
{
    string month;
    int day;
    cout << "Enter your month of birth: ";
    cin >> month;
    cout << "Enter your date of birth: ";
    cin >> day;

    if (month == "March" || month == "April")
    {
        if (day >= 21 || day <= 19)
        {
            cout << "Aries" << endl;
        }
    }

    else if (month == "April" || month == "May")
    {
        if (day >= 20 || day <= 20)
        {
            cout << "Taurus" << endl;
        }
    }

    else if (month == "May" || month == "June")
    {
        if (day >= 21 || day <= 20)
        {
            cout << "Gemini" << endl;
        }
    }

    else if (month == "June" || month == "July")
    {
        if (day >= 21 || day <= 22)
        {
            cout << "Cancer" << endl;
        }
    }

    else if (month == "July" || month == "August")
    {
        if (day >= 23 || day <= 22)
        {
            cout << "Leo" << endl;
        }
    }

    else if (month == "August" || month == "September")
    {
        if (day >= 23 || day <= 22)
        {
            cout << "Virgo" << endl;
        }
    }

    else if (month == "September" || month == "October")
    {
        if (day >= 23 || day <= 22)
        {
            cout << "Libra" << endl;
        }
    }

    else if (month == "October" || month == "November")
    {
        if (day >= 23 || day <= 21)
        {
            cout << "Scorpio" << endl;
        }
    }

    else if (month == "November" || month == "December")
    {
        if (day >= 22 || day <= 21)
        {
            cout << "Sagittarius" << endl;
        }
    }

    else if (month == "December" || month == "January")
    {
        if (day >= 22 || day <= 19)
        {
            cout << "Capricon" << endl;
        }
    }

    else if (month == "January" || month == "Februry")
    {
        if (day >= 20 || day <= 18)
        {
            cout << "Aquarius" << endl;
        }
    }

    else if (month == "Februry" || month == "March")
    {
        if (day >= 19 || day <= 20)
        {
            cout << "Pisces" << endl;
        }
    }
}