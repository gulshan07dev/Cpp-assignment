//Q1. - Write a program which takes the values of length and breadth 
// from user and check if it is a square or not.
// input: lenght = 4, breadth = 5
// output: it is a rectangle

#include<iostream>
using namespace std;
int main() {
    int l, b;
    cout<<"Enter lenght: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;

    if(l == b) {
        cout<<"it is a square";
    }
    else {
        cout<<"it is a rectangle";
    }
    return 0;
}