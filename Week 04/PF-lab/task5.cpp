#include <iostream>
using namespace std;
void calculatebill (string day, int amount);
main()
{
 string day;
 int amount;
 while (true)
  {
  cout << "Enter current day: ";
  cin >> day;
  cout <<"Enter your total amount: ";
  cin >> amount;
  calculatebill (day, amount);
  }
}

void calculatebill (string day, int amount)
 {
  if (day == "sunday")
  {
  int discount = (10 * amount)/100 ;
  amount = amount - discount;
  cout << "Payable amount = " << amount << endl;
  }
  if (day != "sunday")
  {
  int discount = (5 * amount)/100 ;
  amount = amount - discount;
  cout << "Payable amount = " << amount << endl;
  }
}