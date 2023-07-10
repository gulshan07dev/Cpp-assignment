//Q1- Write a program to calculate factorial of a number


#include<iostream>
using namespace std;
int main() {
     cout<<"Enter Number: ";
     int number;
     cin>>number;
     int factorial=1;
     for(int i = 1; i <= number; i++){
          factorial *= i;
     }
     cout<<"Factorial of "<<number<<" is: "<<factorial;
     return 0;
}