/* Q4 - Write a program to calculate the sum of the 
first and the second last digit of a 5 digit number.
Sample Input: 12345
Sample Output: 1+5=6       */

#include<iostream>
using namespace std;
int main() {
    int n = 12345;
    int first = (n / 10000);  //first digit
    n = (n % 10000);
    int second = (n / 1000);  //second digit
    n = (n % 1000);
    int third = (n / 100);    //third digit
    n = (n % 100);
    int fourth = (n / 10);    //fourth digit
    int fifth = (n % 10);     //fifth digit

    cout<<(first + fifth)<<endl;

    return 0;
}