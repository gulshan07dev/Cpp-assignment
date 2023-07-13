/*   Q4 - Given two arrays a[] and b[] of same size.Your task is to 
find the minimum sum of two elements such
 that they belong to different arrays and are not at the same index.
  Here 1<size<101
For ex: a[]={5,6,10,4,9}
 b[]={1,2,3,4,5}
Output: 5     */

#include<iostream>
using namespace std;

int minSum(int a[], int b[], int n) {
  int minA = INT8_MAX, minB = INT8_MAX, indexA = 0, indexB = 0;
  int min2A = INT8_MAX, min2B = INT8_MAX;

  for(int i = 0; i < n; i++) {
    if(a[i] < minA) {
      min2A = minA;
      minA = a[i];
      indexA = i;
    }
  }
}
int main() {
  cout<<"Enter n: ";
  int n;
  cin>>n;

  int a[n];
  int b[n];

  cout<<"Enter a[n]: ";
  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }

  cout<<"Enter b[n]: ";
  for(int i = 0; i < n; i++) {
    cin>>b[i];
  }

  minSum(a, b, n);

  return 0;
}
