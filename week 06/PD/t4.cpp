#include <iostream>
using namespace std;
main()
{
    char servicecode, time;
    float minutes, extra, charges;
    cout << "Enter your service code ('p'  for premier and 'n' for normal): ";
    cin >> servicecode;
    cout << "(Press 'D' for day time and 'N' for night time) call: ";
    cin >> time;
    cout << "Enter number of minutes you used services: ";
    cin >> minutes;
    if (((servicecode == 'p') || (servicecode == 'P')) && time == 'D')
    {
        if (minutes > 70)
        {
            extra = minutes - 70;
            extra = extra * 0.10;
            charges = 25.0 + extra;
            cout << "The charges are " << charges << endl;
        }
        if (minutes < 70)
        {
            charges = 25.0;
            cout << "Tne charges are " << charges << endl;
        }
    }

    if (((servicecode == 'p') || (servicecode == 'P')) && time == 'N')
    {
        if (minutes > 100)
        {
            extra = minutes - 100;
            extra = extra * 0.05;
            charges = 25.0 + extra;
            cout << "The charges are " << charges << " $" << endl;
        }
        if (minutes < 100)
        {
            charges = 25.0;
            cout << "Tne charges are " << charges << " $" << endl;
        }
    }

    if (servicecode == 'n' || servicecode == 'N')
    {
        if (minutes > 50)
        {
            extra = minutes - 50;
            extra = extra * 0.20;
            charges = 10.0 + extra;
            cout << "The charges are " << charges << " $" << endl;
        }
        if (minutes < 50)
        {
            charges = 10.0;
            cout << "Tne charges are " << charges << " $" << endl;
        }
    }
    if (servicecode != 'p' && servicecode != 'n' && servicecode != 'P' && servicecode != 'N' )
    {
        cout << "error " << endl;
    }

    if (time != 'D' && time != 'N')
    {
        cout << " error" << endl;
    }
}