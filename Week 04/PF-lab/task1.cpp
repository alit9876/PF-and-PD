#include <iostream>
using namespace std;
void iseligiable (int age);
main()
{

int age;
while(true)
 {
cout <<"Enter your age: ";
cin >> age;
iseligiable (age);
 }

}


void iseligiable (int age){
if (age >=18)
 {
 cout <<"You are eligiable"<<endl;
 }
if (age<18)
 {
 cout <<"You are not eligiable"<<endl;
 }
}