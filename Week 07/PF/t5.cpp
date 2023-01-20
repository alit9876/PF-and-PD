#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number, sum;
    cout << "Enter a number: ";
    cin >> number;
    sum = digitSum(number);
    cout << "Sum: " << sum << endl;
}

int digitSum(int number)
{
    int sum = 0;
    int n1;
    while (number != 0)
    {
        n1 = number % 10;
        number = number / 10;
        sum = sum + n1;
    }
    return sum;
}
