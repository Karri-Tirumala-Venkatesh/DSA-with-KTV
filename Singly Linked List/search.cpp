#include <iostream>
using namespace std;

class node
{
public:
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    int data;
    node *next;
};

node *insert_first(int d, node *head)
{
    node *temp = new node(d);
    if (head == NULL)
    {
        return temp;
    }
    temp->next = head;
    return temp;
}

int main()
{
    node *head = NULL;
    head = insert_first(5, head);
    head = insert_first(2, head);
    head = insert_first(4, head);
    head = insert_first(7, head);
    node *ptr = head;
    int key = 9;
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            cout << "Found";
            key = 0;
            break;
        }
        ptr = ptr->next;
    }
    if (key != 0)
    {
        cout << "Not Found";
    }
    return 0;
}