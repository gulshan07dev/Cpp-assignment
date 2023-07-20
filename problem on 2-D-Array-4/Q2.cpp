/**
 * Q2 - A square matrix is said to be an perfect Matrix if both of the following
 * conditions hold:
 * a) All the elements in the diagonals of the matrix are non-zero integers.
 * b) All other elements except the diagonal elements are 0.
 * Given a 2D integer array grid of size n x n representing a square matrix, return true
 * if grid is a perfect matrix. Otherwise, return false using functions.
 *
 * Sample Input: [[1,0,0,1],[0,2,1,0],[0,1,2,0],[3,0,0,1]]
 * Sample Output: true
 * Sample Input: [[5,7,0],[0,3,1],[0,5,0]]
 * Sample Output: false
 */

#include <iostream>
using namespace std;

bool isPerfectMatrix(int grid[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (grid[i][j] == 0 || grid[i][j] == 0)
                {
                    return false;
                }
            }
            else
            {
                if (grid[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    // Sample Input 1
    int grid1[][3] = {{1, 0, 0}, {0, 2, 1}, {0, 1, 2}};
    int n1 = 3;

    // Check if grid1 is a perfect matrix
    bool result1 = isPerfectMatrix(grid1, n1);
    cout << "Sample Output 1: " << (result1 ? "true" : "false") << endl;

    // Sample Input 2
    int grid2[][3] = {{5, 7, 0}, {0, 3, 1}, {0, 5, 0}};
    int n2 = 3;

    // Check if grid2 is a perfect matrix
    bool result2 = isPerfectMatrix(grid2, n2);
    cout << "Sample Output 2: " << (result2 ? "true" : "false") << endl;

    return 0;
}
