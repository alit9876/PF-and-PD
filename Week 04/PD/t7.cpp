#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy (int x, int y);
void palyerMove (int x, int y); 
main()
{
 system ("cls");
 printmaze();
 int x = 3;
 int y = 3;
 while (true){
 palyerMove(x,y);
 if(y < 14)
{
 y = y + 1;
}
if (y == 14)
{
gotoxy(x, y-1);
cout <<" ";
 y = 3;
}
}

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

void palyerMove (int x , int y){
 gotoxy (x, y-1 );
 cout << " ";
 gotoxy (x, y);
 cout << "P";
 Sleep(200);
}


