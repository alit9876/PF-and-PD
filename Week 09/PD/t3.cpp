#include <iostream>
using namespace std;
main()
{
    string word;
    int count;
    cout << "Enter a word: ";
    cin >> word;
    for(int index = 0;word[index] != '\0' ; index++ )
    {
        count++;
    }
    count--;
    if(count %2 == 0)
    {
        cout << "True" << endl;
    }
    else
    cout << "FAlse " << endl;

}