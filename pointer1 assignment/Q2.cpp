//Q2 - Write a program to find the product of 2 numbers using pointers
// input: 3 10
// output: 30

#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout<<(*ptr1) * (*ptr2)<<endl;

    return 0;
}