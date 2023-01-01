#include <iostream>
using namespace std;
void ticketconv(string country,float ticketp);
main()
{
string country;
float ticketp;
 While (true)
 { 
 cout << "Enter your country name = ";
 cin >> country;
 cout << "Enter your ticket price = ";
 cin >> ticketp;
 ticketconv(country,ticketp);
 }

}
void ticketconv(string country,float ticketp)
{
if (country == "Pakistan")
 {
 float discount;
 discount = (5 * ticketp)/ 100;
 ticketp = ticketp - discount;
 cout << "Total price after discount = " << ticketp <<endl;
 }
if (country == "Ireland")
 {
 float discount;
 discount = (10 * ticketp)/ 100;
 ticketp = ticketp - discount;
 cout << "Total price after discount = " << ticketp <<endl;
 } 
if (country == "India")
 {
float discount;
 discount = (20 * ticketp)/ 100;
 ticketp = ticketp - discount;
 cout << "Total price after discount = " << ticketp<<endl;
 }
if (country == "England")
 {
 float discount;
 discount = (30 * ticketp)/ 100;
 ticketp = ticketp - discount;
 cout << "Total price after discount = " << ticketp <<endl;
 }
if (country == "Canada")
 {
 float discount;
 discount = (45 * ticketp)/ 100;
 ticketp = ticketp - discount;
 cout << "Total price after discount = " << ticketp <<endl;
 }
}
