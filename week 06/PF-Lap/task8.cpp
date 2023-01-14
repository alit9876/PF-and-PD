#include <iostream>
using namespace std;
float discount(string day, string month, int amount);
main()
{
    string day, month;
    float amount;
    float payable;
    cout << "Enter your total amonut = ";
    cin >> amount;
    cout << "Enter current day = ";
    cin >> day;
    cout << "Enter month name = ";
    cin >> month;
    payable = discount(day, month, amount);
    cout << "Total payable amonut after discount = " << payable << endl;
}

float discount(string day, string month, int amount)
{
    float discount;
    if (day == "Sunday" )
    {
        if (month == "October" || month == "August" || month == "March")
        {
            discount = amount - (amount * 10) / 100;
        }
    }
    if (day == "Monday" )
    {
        if (month == "November" || month == "December")
        {
            discount = amount - (amount * 5 / 100);
        }
    }
    else
    {
        discount = amount;
    }

    return discount;
}