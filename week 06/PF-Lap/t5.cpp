#include <iostream>
#include <cmath>
using namespace std;
float lowestprice(int km, string time);
main()
{
    int km;
    string time;
    float result;
    cout << "ENter number of kilometre = ";
    cin >> km;
    cout << "ENter time of day = ";
    cin >> time;
    result = lowestprice(km, time);
    cout << "Lowest price = " << result << endl;
}

float lowestprice(int km, string time)
{
    float result, taxi, bus, train, compare;
    if (time == "day")
    {
        if (km < 20)
        {
            taxi = 0.70 + (0.79 * km);
            result = taxi;
        }
        else if (km >= 20)
        {
            taxi = 0.70 + (0.79 * km);
            bus = 0.09 * km;
            result = min(taxi, bus);
        }
        else if (km >= 100)
        {
            taxi = 0.70 + (0.79 * km);
            bus = 0.09 * km;
            train = 0.06 * km;
            compare = min(taxi, bus);
            result = min(train, compare);
        }
    }

    if (time == "night")
    {
        if (km < 20)
        {
            taxi = 0.70 + (0.90 * km);
            result = taxi;
        }
        else if (km >= 20)
        {
            taxi = 0.70 + (0.90 * km);
            bus = 0.09 * km;
            result = min(taxi, bus);
        }
        else if (km >= 100)
        {
            taxi = 0.70 + (0.90 * km);
            bus = 0.09 * km;
            train = 0.06 * km;
            compare = min(taxi, bus);
            result = min(train, compare);
        }
    }
    return result;
}