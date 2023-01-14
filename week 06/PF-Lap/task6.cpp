#include <iostream>
using namespace std;
float discount (string day, string month, int amount);
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
    if (day == "Sunday" || month == "October")
    {
         discount = amount - (amount * 10) / 100;
      
    }
    else
    {
        discount = amount;
    }
    return discount;
}