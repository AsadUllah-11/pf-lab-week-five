#include <iostream>
#include <cmath>
using namespace std;
main()
{
float a = 5;
float b = 6;
float c = 1;
float discriminant = ((b*b)-(4*a*c));
float result;
result = sqrt(discriminant);
float answerPositive, answerNegative;
answerPositive = ((-b+result)/(2*a));
answerNegative = ((-b-result)/(2*a));
cout << "First answer is: " << answerPositive << endl;
cout << "Second answer is: " << answerNegative << endl;
}
