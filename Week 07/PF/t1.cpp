#include <iostream>
using namespace std;
void series(int series);
main()
{
    int number;
    cout << "Enter the range of series: ";
    cin >> number;
    series(number);
}

void series(int series)
{
    int n1, n2, result;
    n1 = 0;
    n2 = 1;
    result = 0;
    cout << n1 << " " << n2 << " ";
    for (int n = 1; n <= (series - 2); n++)
    {
        result = n1 + n2;
        cout << result << " ";
        n1 = n2;
        n2 = result;
    }
}