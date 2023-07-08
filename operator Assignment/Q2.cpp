/*Q2 - Write a program to take the values of two variables a and b from the
keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
Sample Input: 1, 2
Sample Output: 0        */

#include<iostream>
using namespace std;
int main() {
    cout<<"Enter a and b: ";
    int a, b;
    cin>>a>>b;
    bool check = false;
    if(a < 50 && a < b) {
        check = true;
    }
    cout<<check;
    return 0;
}