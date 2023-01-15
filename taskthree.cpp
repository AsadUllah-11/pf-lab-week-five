#include <iostream>
#include <cmath>
float calculateHeight(float distance, float degree);
using namespace std;
main()
{
	float degree;
	cout << "Enter Angle in Degrees: ";
	cin >> degree;
	float distance;
	cout << "Enter Distance: ";
	cin >> distance;
	float result;
	result = calculateHeight(distance,degree);
	cout << "Height is: " << result;
}
float calculateHeight(float distance, float degree)
{
	float radian = ((1/57.2958)*degree);
	float result;
	result = tan(radian);
	float height;
	height = result * 43.0;
	return height;
}
