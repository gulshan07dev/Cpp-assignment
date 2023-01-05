//Q2- Write a program to print all Armstrong numbers between 100 to 500.

#include<iostream>
using namespace std;
int main(){

cout<<"Armstrong numbers in the range of 100 to 500 are :"<<endl;
 for(int i=0;i<500;i++)
 {
int sum = 0;
int t = i;
while(t!=0)
{
sum = sum+((t%10)*(t%10)*(t%10));
t = t/10;
}
if(sum == i)
{
cout << i <<"\n";
}
 }

     return 0;
}