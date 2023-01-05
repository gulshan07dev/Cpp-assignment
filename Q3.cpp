//Q3- Write a program to find the sum of n natural number.

#include<iostream>
using namespace std;
int main() {
     cout<<"Enter a positive integer: ";
     int num,sum;
     cin>>num;
     sum = 0;

     for(int i = 0; i <= num; i++) {
          sum += i;
     }
     cout<<"sum = "<<sum<<endl;
     return 0;
}