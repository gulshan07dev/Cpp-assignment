/* Q2 - Given an integer array and its size, find the sum of the
greatest and the smallest integer present in the
array. Here 1< size <101
For ex: arr[]={1,2,3,4,5} n=5
Output: 6     */

#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,9,4,5};
    int n = 5;

    int greatest_integer = INT8_MIN;
    int smallest_integer = INT8_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] > greatest_integer) {
            greatest_integer = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest_integer) {
            smallest_integer = arr[i];
        }
    }
    cout<<(greatest_integer + smallest_integer)<<endl;

    return 0;
}