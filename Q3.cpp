//Q3- write a program to take input from user for cost price(CP) and selling price(SP) and calculate profit and loss.

#include<iostream>
using namespace std;
int main(){
int CP, SP, amt;

cout<<"Enter cost price: ";
cin>>CP;

cout<<"Enter selling price: ";
cin>>SP;

if(SP>CP){
    amt=SP-CP;      //calculate profit
    cout<<"Profit: "<<amt;
}

else if(CP>SP){
     amt=CP-SP;    //calculate loss
      cout<<"loss: "<<amt;
}
else{
    cout<<"no profit no loss.";  //neither profit nor loss
}
    return 0;
}