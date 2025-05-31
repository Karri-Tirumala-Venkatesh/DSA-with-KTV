#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Refer problemstatement from unique_paths.txt of the same folder
// Applied Dynamic Programming

class Solution
{
public:
    vector<vector<int>> vec;
    Solution()
    {
        vector<vector<int>> temp(100, vector<int>(100, 0));
        vec = temp;
    }

    int uniquePaths(int m, int n)
    {

        if (m - 1 > 0 && n - 1 > 0)
        {
            if (vec[m - 1][n - 2] == 0)
            {
                vec[m - 1][n - 2] = uniquePaths(m, n - 1);
            }
            if (vec[m - 2][n - 1] == 0)
            {
                vec[m - 2][n - 1] = uniquePaths(m - 1, n);
            }
            return vec[m - 1][n - 2] + vec[m - 2][n - 1];
        }
        else if (m - 1 > 0)
        {
            if (vec[m - 2][n - 1] == 0)
            {
                vec[m - 2][n - 1] = uniquePaths(m - 1, n);
            }
            return vec[m - 2][n - 1];
        }
        else if (n - 1 > 0)
        {
            if (vec[m - 1][n - 2] == 0)
            {
                vec[m - 1][n - 2] = uniquePaths(m, n - 1);
            }
            return vec[m - 1][n - 2];
        }
        else
        {
            return 1;
        }
    }
};