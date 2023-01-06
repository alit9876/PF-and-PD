# include <iostream>
# include <cmath>
using namespace std;
float calculateHeight (float distance, float angle);
main()
{
 float degree;
 float angle, distance, result;
 cout << "Enter angel = ";
 cin >> angle;
 degree = angle / 57.2958;
 cout << "Enter distance = ";
 cin >> distance;
 result = calculateHeight ( distance, degree);
 cout << "Height = " << result << endl;
} 

float calculateHeight (float distance, float angle)
{
 float height;
 height = tan(angle) * distance;
 return height;
}