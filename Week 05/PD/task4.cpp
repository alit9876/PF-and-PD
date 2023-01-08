#include <iostream>
using namespace std;
main()
{
float needed,days,workers, off;
cout << "Number of hours needed = ";
cin >>needed;
cout << "NUmber of days required = ";
cin >> days;
cout << "The number of workers = ";
cin >>workers;
off = (days * 10)/100;
days = days - off;
float time = (days * 10) * workers;
if (time > needed)
{
int free = time - needed;
cout << "Yes!" <<free <<"hours left" <<endl;
}
if (time < needed)
{
int required =  needed - time;
cout << "Not enough time!" <<required << "hours needed" << endl;

}
}