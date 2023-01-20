#include <iostream>
using namespace std;
void count(int number);
main()
{
    int number;
    cout << "ENter a number: ";
    cin >> number;
    count(number);
}
void count(int number)
{
    int  count;
    count = 0;
    while (number != 0)
   {
    number = number / 10;
    
    count ++;  

   }
    cout << "Number of digits = " << count << endl;
}