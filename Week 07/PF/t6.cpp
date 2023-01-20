#include <iostream>
using namespace std;
int ecd(int number1, int number2);
int lcm(int number1, int number2, int hcf);

main()
{
    int number1, number2;
    int leastCF, hcf;
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter a number: ";
    cin >> number2;
    hcf = ecd(number1, number2);
    leastCF = lcm(number1, number2, hcf);
    cout << "HCF: " << hcf << endl;
    cout << "leastCf: " << lcm << endl;
}

int ecd(int number1, int number2)
{
    int n;
    for (n = 2;( n <= number1 && (n <= number2)) && (number1 % n == 0) && (number2 % n == 0); n++)
    {
      return n;
    }
}

int lcm(int number1, int number2, int hcf)
{
    int lcm;
    lcm = (number1 * number2) / hcf;
    return lcm;
}
