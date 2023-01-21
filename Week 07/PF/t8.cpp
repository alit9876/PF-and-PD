#include <iostream>
using namespace std;

void Percentage(int number);

main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    Percentage(number);
}

void Percentage(int number)
{
    int n = 1, num1;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    float p;
    while (n <= number)
    {
        cout << "Enter a number: ";
        cin >> num1;
        if (num1 > 0 && num1 <= 199)
        {
            p1++;
        }
        if (num1 >= 200 && num1 <= 399)
        {
            p2++;
        }
        if (num1 >= 400 && num1 <= 599)
        {
            p3++;
        }
        if (num1 >= 600 && num1 <= 799)
        {
            p4++;
        }
        if (num1 >= 800 && num1 <= 1000)
        {
            p5++;
        }
        n++;
    }
    p = p1 + p2 + p3 + p4 + p5;

    cout << (p1 / p) * 100 << endl;
    cout << (p2 / p) * 100 << endl;
    cout << (p3 / p) * 100 << endl;
    cout << (p4 / p) * 100 << endl;
    cout << (p5 / p) * 100 << endl;
}