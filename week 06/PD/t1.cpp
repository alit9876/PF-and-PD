#include <iostream>
using namespace std;
main()
{
    string temperature, humidity, activity;
    cout << "If temperature is ";
    cin >> temperature;
    cout << "If the humidity is ";
    cin >> humidity;
    if (temperature == "warm" && humidity == "dry")
    {
        cout << " Play tennis " << endl;
    }
    if (temperature == "warm" && humidity == "humid")
    {
        cout << " swim ";
    }
    if (temperature == "cold" && humidity == "dry")
    {
        cout << " Play basketball " << endl;
    }
    if (temperature == "cold" && humidity == "humid")
    {
        cout << " Watch TV " << endl;
    }
}