#include <iostream>
using namespace std;
int sum (int number1, int number2);
main()
{
  int number1, number2, result;
  cout << "Enter a number = ";
  cin >> number1;
  cout << "Enter a number = ";
  cin >> number2;
  result = sum (number1,number2);
  cout << "Sum:" << result << endl;
 }

int sum (int number1, int number2)
 {
  int add = number1 + number2;
  return add;
 }
