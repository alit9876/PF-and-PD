#include <iostream>
using namespace std;
void add (int number1, int number2);
void multiple (int number1, int number2);
void division (int number1, int number2);
void subtract (int number1, int number2);
main()
{
 int number1, number2;
 char choice;
 while (true)
 {
  cout << "Enter 1st number = ";
  cin >> number1;
  cout << "Enter 2nd number = ";
  cin >> number2;
  cout << "Enter Operator (+,-,*,/) = ";
  cin >> choice;
  if(choice == '+')
  {
  add (number1, number2);
  }
  if(choice == '*')
  {
  multiple (number1, number2);
  } 
  if(choice == '/')
  {
  division (number1, number2);
  }
  if(choice == '-')
  {
  subtract (number1, number2);
  }
 }
}

void add (int number1, int number2)
 {
 int sum = number1 + number2;
 cout << "Sum is " <<sum <<endl;
 }

void multiple (int number1, int number2)
 {
 int mul = number1 * number2;
 cout << "Product = " << mul <<endl;
 }

void subtract (int number1, int number2)
 {
 int sub = number1 - number2;
 cout << "Subtract = " << sub <<endl;
 }

void division (int number1, int number2)
 {
 float div = number1 / number2;
 cout << "Divison = " << div << endl;
 }




