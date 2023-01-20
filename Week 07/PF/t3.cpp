#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    int number, digit, result;
    cout << "ENter a number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;
    result = frequencyChecker(number, digit);
    cout << "Frequency = " << result << endl;
}
int frequencyChecker(int number, int digit)
{
    int count, n;
    count = 0;
    while (number != 0)
    {
       
        if ((number % 10) == digit)
        {
            count++;
        }
         number = number / 10;
    }
    return count;
}