#include <iostream>
#include <cmath>
using namespace std;
main()
{
  int number1, number2, result;
  cout << "Enter a number ";
  cin >> number1;
  cout << "Enter a number ";
  cin >> number2;
  result = max(number1 , number2);
  cout << result << " is the maximum  number.";
}