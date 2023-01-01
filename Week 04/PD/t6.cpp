#include <iostream>
#include <windows.h>
using namespace std;
void namea();
void namew();
void namei();
void names();
void gotoxy (int, int);
main()
{
 namea();
 cout <<endl;
 namew();
 cout <<endl;
 namea();
 cout <<endl;
 namei();
 cout <<endl;
 names();


}

void namea(){
 cout << "        #####            " << endl;
 cout << "     ##########            " <<endl;
 cout << "    ###      ###       " <<endl;
 cout << "    ###      ###       " <<endl;
 cout << "    ### #### ###       " <<endl;
 cout << "    ###      ###       " <<endl;
 cout << "    ###      ###       " <<endl;
 cout << "    ###      ###       " <<endl;
 cout << "    ###      ###       " <<endl;
}
              
void namew(){
cout << "   ***             ***       " << endl;
cout << "   ***             ***      " << endl;
cout << "   ***             ***       "  << endl;
cout << "   ***             ***       " << endl;
cout << "   ***     **      ***        " << endl;
cout << "   ***    ****     ***          " << endl;
cout << "   ***   **  **    ***         " << endl;
cout << "   *** ***    ***  ***          " << endl;
cout << "   ****           ****          " << endl;
}

void namei(){
cout << "     **********            " <<endl;
cout << "     **********        " <<endl;
cout << "         **        " <<endl;
cout <<  "         **        " <<endl;
cout << "         **        " <<endl;
cout << "         **        " <<endl;
cout << "         **       " <<endl;
cout << "     **********      " <<endl;
cout << "     **********            " <<endl;
}

void names(){
cout<<"                               "<<endl;
cout<<"         ****         "<<endl;
cout<<"        **   *        "<<endl;
cout<<"         ***         "<<endl;
cout<<"           ***        "<<endl;
cout<<"             **      "<<endl;
cout<<"        *   **      "<<endl;
cout<<"         ***        "<<endl;
}




void gotoxy (int x, int y )

{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

