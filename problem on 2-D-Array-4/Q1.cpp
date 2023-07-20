/**
 * Q1 - Write a user defined function upper() which takes an integer square matrix as an
 * input and its size N and prints the upper half of the matrix.
 *
 * Sample Input:arr[][]=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]] N=4
 * Sample Output: 1 2 3 4
 * 6 7 8
 * 11 12
 * 16
 */

#include <iostream>
using namespace std;

void upper(int matrix[][4], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Sample Input
    int arr[][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
    int N = 4;

    // Call the function to print the upper half of the matrix
    upper(arr, N);

    return 0;
}
