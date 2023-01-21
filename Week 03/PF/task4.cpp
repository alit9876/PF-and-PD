#include <iostream>
using namespace std;
main ()
{
float charge;
int time;
float current;
cout << "Enter charge (Q) = ";
cin >>charge;
cout << "Enter time (T) = ";
cin >>time;
current = charge/time;
cout << "Current (I) = " <<current;
}