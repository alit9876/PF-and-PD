#include <iostream>
using namespace std;
void maximum (int number1, int number2);
void minimum (int number1, int number2);
void isEqual (int number1, int number2);
main()
{
 int number1, number2;
 int choice;

  while (true)
 {
  cout <<"Enter a number:";
  cin >> number1;
  cout << "Enter a number:";
  cin >> number2;
  cout << "Enter Choice (1-3) : ";
  cin >> choice;
  if (choice == 1)
  {
  maximum (number1, number2);
  }
  if (choice == 2)
  {
  minimum (number1, number2);
  }
  if (choice == 3)
  {
  isEqual  (number1, number2);
  }
 }
}

void maximum (int number1, int number2)
 {
 if(number1 > number2)
  {
  cout << "The greater number is " <<number1 << endl;
  }
 }

void minimum (int number1, int number2)
{
 if(number1 <number2)
  {
  cout << "The greater number is " << number2 << endl;
  }
}

void isEqual (int number1, int number2)
{
 if (number1 == number2)
  {
  cout << "Both number are equal" << endl;
  }
 if (number1 != number2)
 {
 cout << "Both number are not equal" << endl;
 }
}