#include <iostream>
#include <cmath>
using namespace std;
main()
{
int a,b,c;
float x;
cout << "Enter a number for ""a"" :";
cin >> a;
cout << "Enter a number for ""b"" :";
cin >> b;
cout << "Enter a number for ""c"" :";
cin >> c;
x = ((-b + sqrt (b*b - 4*a*c)) / (2*a*c));
cout << "x is " << x << endl;
x = ((-b - sqrt (b*b - 4*a*c)) / (2*a*c));
cout << "x is " << x << endl;
}