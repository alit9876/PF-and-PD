#include <iostream>
using namespace std;
main()
{
float initial;
float final;
float acceleration;
float time;
cout <<"Enter initial velocity= ";
cin>>initial;
cout <<"Enter acceleration= ";
cin>>acceleration;
cout <<"Enter time= ";
cin>>time;
final = (acceleration*time)+initial;
cout <<"Final velocity= "<<final;
}
