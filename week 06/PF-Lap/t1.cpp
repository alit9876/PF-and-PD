#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    string title;
    cout << "Enter age = ";
    cin >> age;
    cout << "Enter your gender = ";
    cin >> gender;
    title = checkTitle(age, gender);
    cout << title << endl;
}

string checkTitle (int age , char gender)
{
    string title;
    if (gender == 'M')
    {
        if (age >= 16)
        {
            title = "Mr.";
        }
        else if (age < 16)
        {
            title = "Master";
        }
    }
    if (gender == 'F')
    {
        if (age <= 16)
        {
            title = "Ms. "; 
        }
        else if (age > 16)
        {
            title = "Miss";
        }
    }
    return title;
}