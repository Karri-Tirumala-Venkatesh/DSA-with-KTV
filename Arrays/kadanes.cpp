#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Kadane's Algorithm
    // Finding the Maximum sum of Subarrays ending at each element
    // Approach : It can be the same element Sum of the previous Max sum and Current element value

    vector<int> vec = {2, 3, -8, 7, -1, 2, 3};
    vector<int> sum;

    for (int i = 0; i < vec.size(); i++)
    {
        int temp = vec[i];
        if (i != 0)
        {
            if (sum[i - 1] + vec[i] > temp)
            {
                temp = sum[i - 1] + vec[i];
            }
        }
        sum.push_back(temp);
    }

    for (auto i : sum)
    {
        cout << i << " ";
    }

    // Time complexity = O(n)
    // Application : Can be used to Subarray with max sum

    return 0;
}