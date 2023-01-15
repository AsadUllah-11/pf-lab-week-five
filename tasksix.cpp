#include <iostream>
using namespace std;
main()
{
int number; 
cout << "Enter a Five digit number: ";
cin >> number;
int numberone, numbertwo, numberthree, numberfour;
int numberfive, numbersix, numberseven, numbereight;
numberone = number % 10; //12367%10=7
numbertwo = number / 10; //12367/10=1236
numberthree = numbertwo % 10; //6
numberfour = numbertwo / 10; //123
numberfive = numberfour % 10; //3
numbersix = numberfour / 10; //12
numberseven = numbersix % 10; //2
numbereight = numbersix / 10; //1
int sum;
sum = numberone + numberthree + numberfive + numberseven + numbereight;
if (sum % 2 == 0)
{
cout << "The number is Evenish";
}
if (sum % 2 != 0)
{
cout << "The number is Oddish";
}
}