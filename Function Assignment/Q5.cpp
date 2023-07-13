/*  Q5 - Given two numbers a and b, write a program to 
print all the prime numbers present between a and b.    */

#include<iostream>
using namespace std;
bool prime(int num){
     for(int i=2;i<=num-1;i++){
          if(num%i==0){
               return false;
          }
     }
     return true;
}
int main(){
int a=2,b=1000;

for(int i=a;i<=b;i++){
     if(prime(i)){
          cout<<i<<" ";
     }
}
     return 0;
}
