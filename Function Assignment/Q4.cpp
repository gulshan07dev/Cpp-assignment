/*  Q4 - Given two numbers a and b, write a program using functions
 to print all the odd numbers between them.    */

#include<iostream>
using namespace std;
bool isOdd(int num){
     if(num%2==0){
          return false;
     }
     else{
          return true;
     }
}
int main(){
int a=1,b=10;
for(int i=1;i<=b;i++){
     if(isOdd(i)){
          cout<<i<<endl;
     }
}
     return 0;
}