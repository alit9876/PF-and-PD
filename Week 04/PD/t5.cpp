#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x, int y);
void namea();
void namel();
void namei();
main()
{
 gotoxy (12,12);
 namea();



}
void gotoxy (int x, int y )

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void namea(){
 cout << "        #####           ****               **********    " << endl;
gotoxy(12,13);
 cout << "     ##########         ****               **********                " <<endl;
gotoxy(12,14);
 cout << "    ###      ###        ****                   **        " <<endl;
gotoxy(12,15);
 cout << "    ###      ###        ****                   **   " <<endl;
gotoxy(12,16);
 cout << "    ### #### ###        ****                   **     " <<endl;
gotoxy(12,17);
 cout << "    ###      ###        ****                   **     " <<endl;
gotoxy(12,18);
 cout << "    ###      ###        ****                   **  " <<endl;
gotoxy(12,19);
 cout << "    ###      ###        ***********        **********      " <<endl;
gotoxy(12,20);
 cout << "    ###      ###        ***********        **********  " <<endl;
gotoxy(12,21);
}
