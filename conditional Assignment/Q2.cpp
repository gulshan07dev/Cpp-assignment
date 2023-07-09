//Q2 - Write a program to print absolute value of a number entered by the user.
// input: -1
// output: 1

#include<iostream>
using namespace std;
int main() {
    int n, absolute;
    cout<<"Enter a number: ";
    cin>>n;

    if(n < 0) {
        absolute = (-1) * (n);
    }
    else {
        absolute = n;
    }
    cout<<"absolute value is: "<<absolute<<endl;

    return 0;
}