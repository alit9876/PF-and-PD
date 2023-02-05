#include <iostream>
using namespace std;


main()
{
    int store = 0;
    string word;
    cout << "Enter dance move:";
    cin >> word;
string dance[10] = {"Shimmy", "Shake", "Piroutte", "Slide", "BOx Step", "Headspin", "Dosado", "pop", "LOck ", "Arabesque"};
    int p;
    int pinlenght;
    pinlenght = word.length();
    if (pinlenght == 4)
    {
          int p1 = word[0] - 48, p2 = word[1] - 48, p3 = word[2] - 48, p4 = word[3] - 48;
        if ((p1 > -1 && p1 < 10) && (p2 > -1 && p2 < 10) && (p3 > -1 && p3 < 10) && (p4 > -1 && p4 < 10))
        {
           
            for (int i = 0; i < 4; i++)
            {
                p = word[i] - 48;
                store = i + p;
                if (store > 9)
                {
                    store = 0;
                }
                cout << dance[store] << " ";     
            }
        }
      
    }
      else 
        {
            cout << "Invalid input" << endl;
        }
  
}