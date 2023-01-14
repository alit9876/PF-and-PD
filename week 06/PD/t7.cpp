#include <iostream>
using namespace std;
main()
{
    int paperhour, paperminutes;
    int arrivalhour, arrivalminutes;
    int papertime, arrivaltime, time, hour, minute;
    cout << "Exam Starting time (hours): ";
    cin >> paperhour;
    cout << "Exam Starting time(minutes) : ";
    cin >> paperminutes;
    cout << "Student hour of arrival: ";
    cin >> arrivalhour;
    cout << "Student minutes of arrival: ";
    cin >> arrivalminutes;
    papertime = (paperhour)*60 + paperminutes;
    arrivaltime = (arrivalhour)*60 + arrivalminutes;
    if (arrivaltime > papertime)
    {
        cout << "Late" << endl;
        time = arrivaltime - papertime;
        hour = time / 60;
        minute = time % 60;
        cout << hour << ":" << minute << " minutes after the exam" << endl;
    }

    else if ((arrivaltime < papertime) || ((arrivaltime - papertime) <= 30))
    {
        cout << "On time" << endl;
        time = arrivaltime - papertime;
        cout << time << " before the exam" << endl;
    }
    else if (arrivaltime < papertime)
    {
        cout << "Early" << endl;
        time = papertime - arrivaltime;
        hour = time / 60;
        minute = time % 60;
        cout << hour << ":" << minute << " minutes before the exam" << endl;
    }
}