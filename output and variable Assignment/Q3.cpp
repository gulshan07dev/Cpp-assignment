//Q3. Write a C++ program to take length and breadth of a rectangle and print its area. 
//Sample input: 7, 4
//Sample output: 28

#include<iostream>
using namespace std;
int main() {
    cout<<"Enter lenght: ";
    int l;
    cin>>l;
    cout<<"Enter breadth: ";
    int b;
    cin>>b;
    cout<<"area of rectangle is: "<<(l * b);
    return 0;
}