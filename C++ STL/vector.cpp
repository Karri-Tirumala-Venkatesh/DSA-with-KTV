#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaration
    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3};

    // Insertion at last
    vec1.push_back(1);

    // Comparision
    if (vec1 == vec2)
    {
        cout << "Equal\n";
    }
    else
    {
        cout << "Not Equal\n";
    }

    // Size
    cout << vec2.size() << "\n";

    // Equate;
    vec1 = vec2;

    // Pop the last element
    vec1.pop_back();

    // Print - Using For each Loop
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << "\n";

    // Print - Using For Loop
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }

    return 0;
}