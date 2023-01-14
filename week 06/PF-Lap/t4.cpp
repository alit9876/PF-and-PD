#include <iostream>
using namespace std;
float totalincome (string screening, int row, int column);
main()
{
    int row, column;
    string screening;
    float income;
    cout << "ENter screening type = ";
    cin >>screening;
    cout << "Enter number of rows =  ";
    cin >> row;
    cout << "Enter number of column = ";
    cin >> column;
    income = totalincome (screening, row, column);
    cout << "Total income " << income << endl;
}

float totalincome (string screening, int row, int column)
{
    float income;
    if (screening == "premiere")
    {
        income = row * column * 12.00;
    }
    else if (screening == "normal")
    {
        income = row * column * 7.50;
    }
    else if (screening == "discount")
    {
        income = row * column * 5.00;
    }
    return income;
}
