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

node *delete_first(node *head)
{
    if (head->next == NULL)
    {
        return NULL;
    }
    return head->next;
}

int main()
{
    node *head = NULL;
    head = insert_first(5, head);
    head = insert_first(2, head);
    head = insert_first(4, head);
    head = delete_first(head);
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
    return 0;
}