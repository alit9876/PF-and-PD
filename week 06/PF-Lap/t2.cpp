#include <iostream>
using namespace std;
bool samenumber (int number1, int number2, int number3);
main()
{
    int number1, number2, number3;
    bool result;
    cout << "Enter a number = ";
    cin >> number1;
    cout << "Enter a number = ";
    cin >> number2;
    cout << "Enter a number = ";
    cin >> number3;
    result = samenumber (number1, number2, number3);
    if (result == true)
    {
        cout << "Yes" << endl; 
    }
    if (result == false)
    {
        cout << "No" << endl;
    }


}

bool samenumber (int number1, int number2, int number3)
{
    if (number1 == number2 && number2 == number3)
    {
        return true;
    }
    else
    return false;
}