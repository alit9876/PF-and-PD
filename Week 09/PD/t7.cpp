#include <iostream>
using namespace std;
main()
{
   
    string s1;
    string s2;
    
    int count = 0;

    cout << "ENter 1st array :";
    cin >> s1;
   
    cout << "ENter 2nd array :";
    cin >> s2;
  
    for (int index = 0; s1[index] != '\0'; index++)
    {
     
        for (int index2 = 0;s2[index2] != '\0' ; index2++)
        {
            if (s1[index] == s2[index2])
            {
                count++;
                s2[index2] = ' ';
                break;
            }
        }
    }
    cout << "MAtched characters: " << count << endl;
}