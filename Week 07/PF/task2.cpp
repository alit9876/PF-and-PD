#include <iostream>
using namespace std;
void series(int series);
main()
{
    int number = 1122;
    int n1, n2, n3, n4;
    n1 = number %10;
    number = number / 10;
    n2 = number %10;
    number = number / 10;
    n3 = number %10;
    number = number / 10;
    cout << n1 <<n2 << n3;
}