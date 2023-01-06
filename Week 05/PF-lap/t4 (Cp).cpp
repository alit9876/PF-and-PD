#include <iostream>
using namespace std;
bool isEvenish(int result);
bool isOddish(int result);
main ()
{
int number, num1, num2, num3,num4, num5, result;
bool result1;
cout << "Enter a 5 digit number: ";
cin >> number;

num5 = number % 10;
number = number / 10;
num4 = number % 10;
number = number / 10;
num3 = number % 10;
number = number / 10;
num2 = number % 10;
number = number / 10;
num1 = number;
result = num1+num2+num3+num4+num5;
result1 = isEvenish(result);


 if (result1 == true)
 {
 cout << "it's a evenish number";
 }
 if (result1 == false)
 {
 cout << "it's oddish number";
 }

 }


bool isEvenish(int result)
{
 if (result % 2 ==0)
 {
 return true ;
 }
 if (result % 2 !=0)
 { 
 return false;
 }
}





