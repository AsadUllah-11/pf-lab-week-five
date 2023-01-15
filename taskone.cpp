#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int add(int number1, int number2);
float division(int number1, int number2);
main()
{
	int number1;
	int number2;
	int result;
	cout << "Enter First Number: ";
	cin >> number1;
	cout << "Enter Second Number: ";
	cin >> number2;
	system("cls");
	result = add(number1, number2);
	cout << "Sum is " << result << endl;
	float result2;
	result2 = division(number1, number2);
	cout << "Division is " << result2 << endl;
	system("cls");
	int result3 = max(number1,number2);
	cout << "Greater number is: " << result3;
}
int add (int number1, int number2)
{
	int sum;
	sum = number1+number2;
	return sum;
	//return = number1 + number2
}
float division(int number1, int number2)
{
	int division = number1/number2;
	return division;
}
