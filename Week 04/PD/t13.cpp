#include <iostream>
using namespace std;
main()
{
int workingdays,holidays,timeforgame, diff_normroutine;
cout << "Enter number of holidays: ";
cin >> holidays;
workingdays = 365 - holidays;
timeforgame = (workingdays * 63) + (holidays * 127);
diff_normroutine = 30000 - timeforgame  ;

if (timeforgame <=30000)
 {
 cout << "Tom sleep well" << endl;
 cout << diff_normroutine /60  << " hours and " << diff_normroutine % 60 << " minutes less for play" <<endl;
 }


if (timeforgame > 30000)
 {
 cout << "Tom will away" <<endl;
 cout << diff_normroutine << " minutes for play" << endl;
 }
}