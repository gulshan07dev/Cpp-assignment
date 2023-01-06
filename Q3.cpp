//Q3 - Given a m*n integer matrix. If an element of the
// matrix is 0 then set the complete row and column of 
// that element to 0. Make the changes inplace and print the matrix.
// input: m = 3, n = 3, arr[] = {{1,2,3},{1,0,1},{5,6,7}}
// output: {{1,0,3},{0,0,0},{5,0,7}}

#include<iostream>
#include<vector>
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
    vector<pair<int,int>> ans; // we are storing all the cells which have value 0
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 0) {
                ans.push_back({i,j});
            }
        }
    }
    for(int i = 0; i < ans.size(); i++) { //traversing the ans vector and making row and column of that
    //call to 0
        int x = ans[i].first;
        int y = ans[i].second;
        int row = 0;
        int col = 0;
        while(row < m) {
            arr[row][y] = 0;
            row++;
        }
        while(col < n) {
        arr[x][col] = 0;
        col++;
        }
    }

    //print result
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}