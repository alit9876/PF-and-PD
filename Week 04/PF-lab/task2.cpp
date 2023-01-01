#include <iostream>
using namespace std;
void iseven (int number);
main()
{
int number;
while (true)
 {
 cout << "Enter a number: ";
 cin >> number;
 iseven (number);
 }
}

void iseven (int number)
{
 if(number % 2 ==0)
  {
  cout << "Even number" << endl;
  }
 if (number % 2 !=0)
  {
  cout << "Odd number" << endl;
  }

}
