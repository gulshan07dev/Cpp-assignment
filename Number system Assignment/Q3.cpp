/*   Q3 - Given two binary numbers, return the greatest
of these numbers in decimal format.       */

#include <iostream>
using namespace std;
int main()
{

    int num1;
    int num2;
    cout << "Enter the two binary numbers : ";
    cin >> num1 >> num2;
    int power = 1;
    int decimal1 = 0;
    int decimal2 = 0;
    while (num1 > 0)
    { // converting num1 to decimal
        int units_digit = num1 % 10;
        decimal1 += power * units_digit;
        num1 /= 10;
        power *= 2;
    }
    power = 1;
    while (num2 > 0)
    { // converting num2 to decimal
        int units_digit = num2 % 10;
        decimal2 += power * units_digit;
        num2 /= 10;
        power *= 2;
    }
    if (decimal1 > decimal2) // comparing the decimal numbers dec1 and dec2
    {
        cout << "The greater number is : " << decimal1;
    }
    else
    {
        cout << "The greater number is : " << decimal2;
    }

    return 0;
}