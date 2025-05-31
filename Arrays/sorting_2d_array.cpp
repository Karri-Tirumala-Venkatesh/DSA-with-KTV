#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> vec = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    // Sorting the Rows by 1st element
    sort(vec.begin(), vec.end());

    int n = vec.size();
    // Sorting each row
    for (int i = 0; i < n; i++)
    {
        sort(vec[i].begin(), vec[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
    }
    return 0;
}