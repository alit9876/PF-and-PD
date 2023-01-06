#include <iostream>
using namespace std;
bool isSymmetric (int number);
main ()
{
int number;
bool result;
cout << "Enter a 3 digit number: ";
cin >> number;


result = isSymmetric ( number );
 if (result == true)
 {
 cout << "its a symmetric number " << endl;
 }
if (result != true)
 {
 cout << "its not a symmetric number " << endl;
 }

}

bool isSymmetric (int number)
{
int num3,num2,num1;
num3 = number % 10;
number = number / 10;
num2 = number % 10;
number = number / 10;
num1 = number;
if (num1 == num3)
 {
 return true ;
 }
if (num1 != num3)
 {
 return false ;
 }

}




