#include <iostream>
#include <cmath>
using namespace std;
main()
{
  float number1, number2, result;
  cout << "Enter a number ";
  cin >> number1;
  cout << "Enter a number ";
  cin >> number2;


  result = cbrt(number1);
  cout << "Cube root = " << result << endl;


  result = ceil(number2);
  cout << "Cieling = " << result << endl;


  result = floor(number2);
  cout << "Floor = " << result << endl;

}