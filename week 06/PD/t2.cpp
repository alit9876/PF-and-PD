#include <iostream>
using namespace std;
main()
{
    string name, grade;
    float english, maths, chemistry, socialsci, biology, percentage, obtained;
    int total;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your English marks: ";
    cin >> english;
    cout << "Enter your MAths marks: ";
    cin >> maths;
    cout << "Enter your Chemistry marks: ";
    cin >> chemistry;
    cout << "Enter your Socail Science marks: ";
    cin >> socialsci;
    cout << "Enter your Bilolgy marks: ";
    cin >> biology;
    obtained = english + maths + chemistry + socialsci + biology;
    percentage = (obtained * 100) / 500;
    cout << endl << endl;
    cout << "Student name: " << name << endl;
    cout << "obtained Marks: " << obtained << endl;
    cout << "Percentage: " << percentage << endl;
    if (percentage >= 90 && percentage < 100)
    {
        cout << "Grade: A+" << endl;
    }
     if (percentage >= 80 && percentage < 90)
    {
        cout << "Grade: A" << endl;
    }
     if (percentage >= 70 && percentage < 80)
    {
        cout << "Grade: B+" << endl;
    }
     if (percentage >= 60 && percentage < 70)
    {
        cout << "Grade: B" << endl;
    }
     if (percentage >= 50 && percentage < 60)
    {
        cout << "Grade: C" << endl;
    }
     if (percentage >= 40 && percentage < 50)
    {
        cout << "Grade: D" << endl;
    }
     if (percentage < 40 )
    {
        cout << "Grade: F" << endl;
    }
    

}