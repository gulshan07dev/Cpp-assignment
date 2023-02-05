//Q3. Given an array of intervals where arr[i] = [start, end], 
// return the minimum number of intervals you need to remove 
// to make the rest of the intervals non-overlapping.
// input: arr[]=[[1,4],[2,3],[4,5],[6,7]]
// output: 1

#include<iostream>
#include<vector>
using namespace std;

int merge(vector<vector<int>> &s) {
    vector<vector<int>> ans;
    int j = 0;
    ans.push_back(s[0]);
    int count = 0;
    for(int i = 1; i < s.size(); i++) {
        if(ans[j][1] > s[i][0]) {
            count++;
            ans[j][1] = max(ans[j][1], s[i][1]);
        }
        else {
        j++;
        ans.push_back(s[i]);
        }
    }
    return count;
}
int main() {
    vector<vector<int>> mat = {{1, 4}, {2, 3}, {4, 5}, {6, 7}};
    cout<<merge(mat);
    return 0;
}