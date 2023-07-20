/**
 * Q3 - You are given an m x n integer matrix grid. Here m>=3 and n>=3
 * We define an hourglass as a part of the matrix with the following shape:
 *
 * Note that an hourglass cannot be rotated and must be entirely contained within the matrix.
 *
 * Sample Input: [[1,2,3],
 * [4,5,6],
 * [7,8,9]]
 * Sample Output: 35
 * Explanation: This has only one hourglass shape i.e. 1+2+3+5+7+8+9=35
 *
 * Sample Input: [[6,2,1,3],
 * [4,2,1,5],
 * [9,2,8,7],
 * [4,1,2,9]]
 * Sample Output:30
 * Explanation: Amongst all possible hourglass in this matrix the maximum sum will be of the hourglass
 * 6+2+1+2+9+2+8
 */

#include <iostream>
#include <vector>
#include <limits> // Include this header for INT_MIN

using namespace std;

int maxHourglassSum(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int maxSum = numeric_limits<int>::min();  

    for (int i = 0; i < m - 2; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            // Calculate the sum of the hourglass at position (i, j)
            int sum = matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2] + matrix[i + 1][j + 1] + matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];

            // Update maxSum if the current hourglass sum is greater
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main()
{
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int result = maxHourglassSum(matrix);
    cout << "Output: " << result << endl;

    return 0;
}
