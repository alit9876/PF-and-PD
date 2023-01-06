#include <iostream>
using namespace std;
int multiple(int number);
main()
{
int number, result;
cout << "Enter a number: ";
cin >> number;
result = multiple(number);
cout << "Result " << result << endl;
}

int multiple(int number)
{
int result;
result = number*5;
return result;
}

