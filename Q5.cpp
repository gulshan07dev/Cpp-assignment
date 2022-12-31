/* Q5 - Write a program to calculate the sum of digits of a 3 digit number.
Sample Input: 123
Sample Output: 6        */

#include<iostream>
using namespace std;
int main() {
    int n = 123;
    int first, second, third, sum;
    first = (n / 100); //first digit
    n = (n % 100);
    second = (n / 10); //second digit
    third = (n % 10);  //third digit
    
    sum = (first + second + third);
    cout<<sum<<endl;

    return 0;
}