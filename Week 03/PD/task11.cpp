#include <iostream>
using namespace std;
main()
{
int num,sum, mul,result;
int mod1 ,mod2, mod3, mod4;
cout<<"Enter a four digit number=";
cin>>num;
mod4 =num%10;
num = num/10;
mod3 = num%10;
num = num/10;
mod2 = num%10;
num = num/10;
mod1 = num%10;
num = num/10;
sum = (mod1+mod3);
mul = mod2*mod4;
result = sum+mul;
cout <<"Result= "<<result;

} 


