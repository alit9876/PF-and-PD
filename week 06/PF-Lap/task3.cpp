#include <iostream>
using namespace std;
string iseven (int number);
main()
{
    int number;
    string result;
    cout << "Enter a number = ";
    cin >>number;
    result = iseven ( number);
    cout << "The number is " << result <<endl;

}

string iseven (int number)
{
     string result;
    if (number % 2 == 0)
    {
     result = "even ";
    }
    else 
    {
          result = "odd ";
    }
  
    return result;
}