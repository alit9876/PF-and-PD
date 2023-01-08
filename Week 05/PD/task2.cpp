#include <iostream>
#include <cmath>
using namespace std;
float volume(float lenght, float width, float height);
main()
{
float lenght, width, height, result;
string unit;
cout << "Enter lenght of pyramid = ";
cin >> lenght;
cout << "Enter width of pyramid = ";
cin >> width;
cout << "Enter height of pyramid = ";
cin >> height;
cout << "Enter the unit in which you want volume = ";
cin >> unit;
if (unit == "centimetre")
{
lenght = lenght * 10;
height = height  *10;
width = width * 10;
result =  volume( lenght, width, height);
cout << "Volume of pyramid = " << result << endl;
}
if (unit == "kilometre")
{
lenght = lenght /1000;
height = height /1000;
width = width / 1000;
result =  volume( lenght, width, height);
cout << "Volume of pyramid = " << result << endl;

}
if (unit == "millimetre")
{
lenght = lenght* 1000;
height = height * 1000;
width = width * 1000;
result =  volume( lenght, width, height);
cout << "Volume of pyramid = " << result << endl;

}


}
float volume(float lenght, float width, float height)
{
float result = (lenght * width * height) / 3;
return result;
}