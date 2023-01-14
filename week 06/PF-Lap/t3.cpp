#include <iostream>
using namespace std;
string checkSpeed (float speed);
main()
{
    float speed;
    string result;
    cout << "Enter speed = ";
    cin >> speed;
    result = checkSpeed (speed);
    cout << result << endl;
}

string checkSpeed (float speed)
{
    string result;
    if (speed <= 10)
    {
        result = "Slow";
    }
    if (speed > 10 && speed <= 50 )
    {
        result = "Average";
    
    }
    if (speed > 50 && speed <= 150 )
    {
        result = "FAst";
    }
    if (speed > 150 && speed <= 1000)
    {
        result = "Ultra Fast";
    }
    else
    {
        result = "Extremely fast";
    }
    return result;
}