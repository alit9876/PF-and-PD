#include <iostream>
using namespace std;

main()
{
    int period;
    cout << "Enter period: ";
    cin >> period;
    int treated = 0;
    int patient;
    int totaltreated = 0, totaluntreated = 0;
    int doctor = 7;
    int untreated = 0;
    for (int n = 1; n <= period; n++)
    {
        cout << "Enter patient: ";
        cin >> patient;
        if (n % 3 != 0)
        {
            if (patient <= doctor)
            {
                treated = doctor;
                untreated = 0;
            }
            if (patient > doctor)
            {
                treated = doctor;
                untreated = patient - doctor;
            }
        }
        if (n % 3 == 0)
        {
            doctor = 8;
            if (patient <= doctor)
            {
                treated = patient;
                untreated = 0;
            }
            if (patient > doctor)
            {
                treated = doctor;
                untreated = patient - doctor;
            }
        }
        totaltreated = totaltreated + treated;
        totaluntreated = totaluntreated + untreated;
    }
    if (period % 3 == 0)
    {
        totaltreated = totaltreated;
        cout << "treated patient = " << totaltreated << endl;
        cout << "untreated patient = " << totaluntreated << endl;
    }
    else
    {
        totaltreated = totaltreated - 7;
        cout << "treated patient = " << totaltreated << endl;
        cout << "untreated patient = " << totaluntreated << endl;
    }
}