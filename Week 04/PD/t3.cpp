#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy (int, int);
main()
{
 printmaze();
 gotoxy (4,10);
 cout << "Packman";
 gotoxy (4,13);


}
void printmaze()
{
cout << "********************************" <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "*                              * " <<endl;
cout << "********************************" <<endl;
}

void gotoxy (int x, int y )

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


