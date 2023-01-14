#include <iostream>
using namespace std;
int maximum (int number1, int number2, int number3);
main()
{
 int number1, number2, number3, result;
 cout << "Enter number = ";
 cin >> number1;
 cout << "Enter number = ";
 cin >> number2;
 cout << "Enter number = ";
 cin >> number3;
 result = maximum (number1, number2, number3);
 cout << "Greatest number = " << result << endl;


}

int maximum (int number1, int number2, int number3)
{
    int greatest;
if (number1 > number2 )
{
   if (number1 > number3) 
   {
    greatest = number1;
   }
}
if (number2 > number1 )
{
    if( number2 > number3)
    {
     greatest = number2;
    }
}


if (number3 > number1  )
{
    if (number3 > number2)
    {
    greatest =  number3;
    }
}

return greatest;
}