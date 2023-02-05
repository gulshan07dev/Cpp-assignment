//Q1. Given a m*n matrix, Write a function which returns true if the 
// matrix is a perfect matrix. A matrix is called perfect if every 
// diagonal from top-left to bottom-right has the same elements.
// input: arr[]=[[9,8,7,6],[5,9,8,7],[1,5,9,8]]
// output: true

#include<iostream>
#include<vector>
using namespace std;

bool check(vector<vector<int>>&v) {
    for(int i = 1; i < v.size(); i++) {
        for(int j = 1; j < v[0].size(); j++) {
            if(v[i][j] != v[i-1][j-1]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    vector<vector<int>>v = {{9, 8, 7, 6}, {5, 9, 8, 7}, {1, 5, 9, 8}};
    if(check(v)){
        cout<<"True";
    }
    else {
        cout<<"false";
    }
    return 0;
}