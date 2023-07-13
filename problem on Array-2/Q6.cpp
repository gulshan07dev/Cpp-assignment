/* Q6 - Given a vector array nums, print the count of triplets [nums[i], nums[j], 
nums[k]] such  that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x.
 Where k is an integer given by the user.
 Note: The solution set must not contain duplicate triplets and should 
 not have 3 loops.

input: [-1,0,1,2,-1,-4] x=0
Output: 2
Explanation: The two triplets are: -1,0,1 and 1,2,-1

Input: [1,2,3] x=5
Output: 0                 */

#include<iostream>
#include<vector>
using namespace std;
int main() {

     cout<<"Enter n: ";
     int n;
     cin>>n;
     cout<<"Enter nums[]: ";
     int nums[n];
     for(int i = 0; i < n; i++) {
          cin>>nums[i];
     }
     cout<<"Enter x: ";
     int x;
     cin>>x;
     int triplets = 0;

     for(int i = 0; i < n; i++) {
          for(int j = i+1; j < n; j++) {
               for(int k = j+1; k < n; k++) {
                    if(nums[i] + nums[j] + nums[k] == x && (i != j && i !=k && j !=k)) {
                         triplets++;
                    }
               }
          }
     }
     cout<<triplets<<endl;


     return 0;
}