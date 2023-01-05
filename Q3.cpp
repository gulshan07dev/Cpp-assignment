/*   Q3 - Given the age of a person, write a function 
to check if the person is eligible to vote or not.    */

#include<iostream>
using namespace std;
bool checkEligible(int age,int age_limit){
     if(age>=age_limit){
          return true;
     }
     else{
          return false;
     }
}
int main(){
int voting_limit=18;
int isEligible_for_voting=checkEligible(17,voting_limit);
if(isEligible_for_voting==1){
     cout<<"Yes,the current person is eligible for vote";
}
else{
     cout<<"No,the current person is not eligible for vote";
}

     return 0;
}