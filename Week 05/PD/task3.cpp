#include <iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
int price,taxrate;
float taxamount, result, finalprice;
char type;
cout << "Enter your vehicle price = ";
cin >> price;
cout << "Enter your vehicle type = ";
cin >> type;
result = taxCalculator( type,  price);
finalprice = price + result;
cout << "Final price included tax = " << finalprice << endl;
}







float taxCalculator(char type, float price)
{
if (type == 'M')
{
float taxAmount = (price * 6) /100;
return taxAmount;
}
if (type == 'E')
{
float taxAmount = (price * 8)/100;
return taxAmount;
}
if (type == 'S')
{
float taxAmount = (price * 10)/100;
return taxAmount;
}
if (type == 'V')
{
float taxAmount = (price * 12)/100;
return taxAmount;
}
if (type == 'T')
{
float taxAmount = (price * 15)/100;
return taxAmount;
}
}