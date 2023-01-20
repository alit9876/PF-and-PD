#include <iostream>
using namespace std;
int counting(int number);
main()
{
    int number, sum;
    cout << "Enter a number:";
    cin >> number;
   sum =  counting(number);
    cout << "Sum:" << sum << endl;
}
int counting(int number)
{
    int sum = 0;
    for (int n = 1; n <= number; n++)
    {
       sum = sum + n;
    }
    return sum;
    
}