#include <iostream>
#include <vector>
using namespace std;

// Rotate Matrix by 90 degree towards right

void rotate(vector<vector<int>> &matrix)
{
    // Matrix Transpose
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Matrix Horizontal Reverse
    int m = ceil(n / 2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}