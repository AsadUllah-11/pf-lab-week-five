#include <iostream>
#include <cmath>
using namespace std;
main()
{
int number1;
int number2;
int result;
cout << "Enter First Number: ";
cin >> number1;
cout << "Enter Second Number: ";
cin >> number2;
result = min(number1,number2);
cout << "Smaller Number is: " << result << endl;
int result2;
result2 = pow(number1,number2);
cout << "Power of number is: " << result2 << endl;
int result3;
result3 = cbrt(number1);
cout << "Cube Root of " << number1 << " is " << result3 << endl;
float number3;
cout << "Enter a number for ceiling and flooring: ";
cin >> number3;
float result6;
result6 = ceil(number3);
cout << "Ceiling of " << number3 << " is " << result6 << endl;
float result7;
result7 = floor(number3);
cout << "Flooring of " << number3 << " is " << result7 << endl;
}