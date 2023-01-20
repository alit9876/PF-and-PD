#include <iostream>
using namespace std;
int series(int number);
main()
{
    int number, sum;
    cout << "Enter number of series: ";
    cin >> number;
    sum = series(number);

    cout << sum;
}
int series(int number)
{
    int sum = 0;
    for (int n = 1; n <= number; n++)
    {
        sum = sum + n;
    }
    return sum;
}
