/**
 * Q2 - Given a matrix arr[][] of integers, print the prefix sum matrix for it.
 *
 * Sample Input:[[1,2,3],[4,5,6],[7,8,9]]
 * Sample Output:[[1,3,6],[5,12,21],[12,27,45]]
 * Sample Input:[[1,0,1],[0,1,0]]
 * Sample Output:[[1,1,2],[1,2,3]]
 */

#include <iostream>
#include <vector>

using namespace std;

void printPrefixSumMatrix(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    if (m == 0)
        return; // Empty matrix, no valid prefix sum matrix to print

    int n = matrix[0].size();

    // Calculate the prefix sum for the first row
    for (int j = 1; j < n; j++)
    {
        matrix[0][j] += matrix[0][j - 1];
    }

    // Calculate the prefix sum for the first column
    for (int i = 1; i < m; i++)
    {
        matrix[i][0] += matrix[i - 1][0];
    }

    // Calculate the prefix sum for the rest of the matrix
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            matrix[i][j] += matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1];
        }
    }

    // Print the prefix sum matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
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

    cout << "Prefix Sum Matrix:" << endl;
    printPrefixSumMatrix(matrix);

    return 0;
}
