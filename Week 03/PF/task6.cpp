#include <iostream>
using namespace std;
main ()
{
int megabytes;
int kilobytes;
float bytes;
double bit;
cout << "Enter size of memory in Megabytes: ";
cin >>megabytes;
kilobytes = megabytes*1024;
bytes = kilobytes * 1024;
bit = bytes / 8;
cout << "Memory size in bits = "<<bit <<endl;
}
