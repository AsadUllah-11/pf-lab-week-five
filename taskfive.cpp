#include <iostream>
using namespace std;
main()
{
int number;
cout << "Enter a three digit number: ";
cin >> number;
int number1, number2,number3,number7;
number1 = number % 10;
number2 = number / 10;
number3 = number2 % 10;
number7 = number2 / 10;
int numberfive,numbersix,numberseven;
numberfive = number % 100;
numbersix = numberfive % 10;
numberseven = numberfive / 10;
if (number3 + number7 == numbersix + numberseven)
{
cout << "The number is symmetrical";
}
if (number3 + number7 != numbersix + numberseven)
{
cout << "The number is not symmetrical";
}

}