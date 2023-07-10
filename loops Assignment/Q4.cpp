//Q4 - Write a program to reverse a given integer number.

#include<iostream>
using namespace std;
int main() {
     int num,reverse;
     cout<<"Enter number: ";
     cin>>num;
     reverse = 0;

     while(num>0){
          int lastdigit=num%10;
          reverse=reverse*10+lastdigit;
     num/=10;
     }

     cout<<"reverse number is: "<<reverse;
     return 0;
}