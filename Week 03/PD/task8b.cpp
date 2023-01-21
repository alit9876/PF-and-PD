#include <iostream>
using namespace std;
main()
{
int mod1, mod2, mod3, mod4,mod;
int num;
cout <<"Enter a four digit number= ";
cin>>num;
mod1 = num%10;
num = num/10;
mod2 = num%10;
num = num/10;
mod3 = num%10;
num = num/10;
mod4 = num%10;
mod = mod1+mod2+mod3+mod4;
cout<<"Sum= "<<mod;
}

