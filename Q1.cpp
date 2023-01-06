//Q1 - Given a 2D matrix with m rows and n columns containing integers,
// find and print the maximum value present in the array.
// input: m = 3, n = 3, arr[] = {{1,2,3}, {4,5,6}, {7,8,9}}
// output: 9

#include<iostream>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    int max = INT8_MIN;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    cout<<max<<endl;
    return 0;
}