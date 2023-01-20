#include <iostream>
using namespace std;
void amplifier(int number);
main()
{
    int number;
    cout << "Enter desired number: ";
    cin >> number;
    amplifier(number);
}

void amplifier(int number)
{
    int amp = 1;
    int sequence = 0;
    for (int n = 1; n <= number; n++)
    {
        if (n % 4 != 0)
        {
            sequence = n;
            cout << sequence << " ";
        }
        if (n % 4 == 0)
        {
            amp = 10 * n;
            cout << amp << " ";
        }
    }
}