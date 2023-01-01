#include <iostream>
using namespace std;
void isequal (int number1, int number2);
main()
{
int number1, number2;
cout << "Enter a number = ";
cin >> number1;
cout << "Enter a number = ";
cin >> number2;
isequal(number1 , number2);

}

void isequal (int number1, int number2)
 {
 if (number1 == number2)
 {
 cout <<"True";
 }
 if (number1 != number2)
 {
  cout << "false";
 }
}
 

