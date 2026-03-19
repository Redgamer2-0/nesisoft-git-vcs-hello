#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    //prompt the user for two numbers
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << endl << "Enter the second number: ";
    cin >> num2;

    //Perform arithmetic and display results!
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl; 
    int difference = subtract(num1, num2);
    cout << "Difference: " << difference << endl; 
    int product = multiply(num1, num2);
    cout << "Sum: " << product << endl; 
    int quotient = divide(num1, num2);
    cout << "Sum: " << quotient << endl; 
    int factor = factorial(num1);
    cout << "Factorial: " << factorial << endl; 

    return 0;
}