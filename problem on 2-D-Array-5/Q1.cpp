/**
 * Q1 - Given a 2D matrix with m rows and n columns containing integers. Print and
 * return the row number with maximum sum in the array.
 *
 * Note: In case multiple rows have the same sum then return any row number with that sum.
 *
 * m=3
 * n=3
 * arr[] = {{1,9,6}, {4,5,2}, {7,8,3}}
 * Output: 3
 * Explanation: The 3rd row has the maximum sum which is 18
 * m=3
 * n=3
 * arr[] = {{1,2,3}, {1,3,2}, {2,1,3}}
 * output: 1
Explanation: All the rows have the same sum i.e. 6 so return any row number.
*/

#include <iostream>
#include <vector>

using namespace std;

int findRowWithMaxSum(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    if (m == 0)
        return -1; // Empty matrix, return -1 indicating no valid row

    int n = matrix[0].size();
    int maxSum = 0;
    int maxRow = -1;

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        if (sum >= maxSum)
        {
            maxSum = sum;
            maxRow = i + 1; // Adding 1 to convert zero-based index to 1-based index
        }
    }

    return maxRow;
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

    int result = findRowWithMaxSum(matrix);
    cout << "Output: " << result << endl;

    return 0;
}
