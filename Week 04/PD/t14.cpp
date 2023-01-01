#include <iostream>
using namespace std;
void printmenu();
void calculateaggregate1 ( int matricmarks,int intermarks,int ecatmarks1);
void calculateaggregate2 ( int matricmarks, int intermarks, int ecatmarks2);
void comparemarks (int ecatmarks1, int ecatmarks2, string name1, string name2);
main()
{

 int matricmarks, intermarks, ecatmarks1, ecatmarks2;
 float aggregate1, aggregate2;
 string name1, name2;

 printmenu();

 cout << "Enter your name: ";
 cin >> name1;
 cout << "Enter your matric number = ";
 cin >> matricmarks;
 cout << "Enter your inter number = ";
 cin >> intermarks;
 cout << "Enter your ecat number = ";
 cin >> ecatmarks1;
 calculateaggregate1( matricmarks, intermarks, ecatmarks1);



 cout << "Enter your name: ";
 cin >> name2;
 cout << "Enter your matric number = ";
 cin >> matricmarks;
 cout << "Enter your inter number = ";
 cin >> intermarks;
 cout << "Enter your ecat number = ";
 cin >> ecatmarks2;
 calculateaggregate2 ( matricmarks, intermarks,ecatmarks2);

 comparemarks (ecatmarks1, ecatmarks2,name1,name2);

}

void printmenu()
 {
 cout << "*****************************************" << endl;
 cout << "*       UNIVERSITY ADMISSION            *" << endl;
 cout << "*            MANAGEMENT                 *" << endl;
 cout << "*                SYSTEM                 *" << endl;
 cout << "*****************************************" << endl;
 }



void calculateaggregate1 ( int matricmarks, int intermarks, int ecatmarks1)
 {

 float aggregate1 = (30 * matricmarks)/1100 + (30 * intermarks)/550 + (40 * ecatmarks1)/400;
 cout << "Your aggregate is "<< aggregate1 << endl;
 }


 void calculateaggregate2 ( int matricmarks, int intermarks, int ecatmarks2)
 {
 float aggregate2 = (30 * matricmarks)/1100 + (30 * intermarks)/550 + (40 * ecatmarks2)/400;
 cout << "Your aggregate is "<< aggregate2 << endl;
 }

void comparemarks (int ecatmarks1, int ecatmarks2, string name1, string name2)
 {
  if(ecatmarks1 > ecatmarks2)
  {
  cout << "Roll number 1 is allocated to " << name1 <<endl;
  }
  if(ecatmarks1 < ecatmarks2)
  {
  cout << "Roll number 1 is allocated to " << name2 <<endl;
  }
 }

