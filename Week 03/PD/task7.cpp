#include <iostream>
using namespace std;
main()
{
string moviename;
int adultTicket;
int childrenTicket;
int adultTsold;
int childrenTsold;
int percentageDonate;
int total;
float percentage;
int amountafterdonation;
cout <<"Enter movie Name= ";
cin>>moviename;
cout <<"Enter adult ticket price= ";
cin>>adultTicket;
cout <<"Enter children ticket price= ";
cin>>childrenTicket;
cout <<"Enter number of adult ticket sold= ";
cin>>adultTsold;
cout <<"Enter number of children ticket sold= ";
cin>>childrenTsold;
cout <<"Enter the percentage to donate= ";
cin>>percentageDonate;
total = (adultTicket*adultTsold)+(childrenTicket*childrenTsold);
percentage = (percentageDonate*total)/100;
amountafterdonation = total-percentage;
cout <<"Total amount generated= "<<total<<endl;
cout <<"Amount after donation= "<<amountafterdonation;
}


