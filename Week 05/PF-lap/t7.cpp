#include <iostream>
#include <cmath>
using namespace std;
main()
{
  float angle, result,degree;
  cout << "Enter angle ";
  cin >> angle;
  degree = angle / 57.2958;
  result = sin(degree);
  cout << "sin = " << result;


}