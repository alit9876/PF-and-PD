#include <iostream>
using namespace std;
void printTable (int number);
main()
{
    int number;
    cout << "Enter a number for table: ";
    cin >> number;
    printTable(number);
}
void printTable (int number)
{
    for (int c = 1; c <=10; c++)
    {
        cout << number << " * " << c  << " = "<< number * c << endl;
    }
}