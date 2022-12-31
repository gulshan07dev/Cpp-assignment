//Q6. Write a C++ program to swap two numbers with the help of a third variable.
//Sample input: 2, 3
//Sample output: 3, 2

#include<iostream>
using namespace std;
int main() {
    cout<<"Enter first number: ";
    int x;
    cin>>x;
    cout<<"Enter second number: ";
    int y;
    cin>>y;
    int temp = x;
    x = y;
    y = temp;
    cout<<"You entered first number: "<<x<<endl;
    cout<<"You entered first number: "<<y<<endl;
    return 0;
}