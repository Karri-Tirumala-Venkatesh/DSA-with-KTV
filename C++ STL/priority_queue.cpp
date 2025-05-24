#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Priority Queue == Max Heap

    priority_queue<int> pq;

    // Insertion
    pq.push(9);
    pq.push(10);
    pq.push(6);

    // Print the top element - Minimum Element
    cout << pq.top() << "\n";

    // Delete Top Element
    pq.pop();

    // Check if Empty
    if (pq.empty())
    {
        cout << "Empty\n";
    }
    else
    {
        cout << "Not Empty\n";
    }

    // Size
    cout << pq.size() << "\n";

    // Printing all Elements
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    // Can copy a priority_queue similar to a vector

    return 0;
}