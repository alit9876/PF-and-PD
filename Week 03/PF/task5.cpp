#include <iostream>
using namespace std;
main ()
{
string name;
float matric;
float intermediate;
float ecat;
float aggregate;
cout << "Enter your name: ";
cin >>name;
cout << "Enter your matric marks: ";
cin >>matric;
cout << "Enter your intermediate marks: ";
cin >>intermediate;
cout << "Enter your ecat number: ";
cin >>ecat;
aggregate = (ecat/400*50)+(intermediate/1100*40)+(matric/1100*10) ;
cout << "Your aggregate is: "<< aggregate;
}
