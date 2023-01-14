#include <iostream>
using namespace std;
char Checkresult(int marks);
main()
{
    int marks;
    char grade;
    cout << "Enter your marks = ";
    cin >> marks;
    grade = Checkresult(marks);
    cout << "Your grade is " << grade << endl;
}

char Checkresult(int marks)
{
    char result;
    if (marks < 50)
    {
        result = 'F';
    }
    else if (marks >= 50 && marks <= 60)
    {
        result = 'E';
    }
    else if (marks >= 61 && marks <= 70)
    {
        result = 'D';
    }
    else if (marks >= 71 && marks <= 80)
    {
        result = 'C';
    }
    else  if (marks >= 81 && marks <= 85)
    {
        result = 'B';
    }
    else if (marks > 85)
    {
        result = 'A';
    }
    else
    {
        result = '0';
    } 
    return result;
}