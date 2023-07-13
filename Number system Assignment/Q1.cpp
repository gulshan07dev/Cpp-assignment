// Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include<iostream>
using namespace std;
int main(){

     int sum=0;
      for(int i=1;i<=5;i++){
          sum+=i;
     }
     int power=1;
     int ans=0;
     
     while(sum>0){
          int paritydigit=sum%2;
          ans+=paritydigit*power;
          power*=10;
          sum/=2;
     }
     cout<<ans<<endl;

     return 0;
}