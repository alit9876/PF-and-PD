#include <iostream>
using namespace std;
void reverseresult(string result);
main()
{
 string result;
 cout << "Enter operation to reverse = ";
 cin >> result;
 reverseresult(result);

}

void reverseresult(string result)
{
 if (result == "true")
 {
 cout <<"Reverse result = false " << endl;
 }
 if (result == "false")
 {
 cout << "Reverse result = true " << endl;
 }
}


