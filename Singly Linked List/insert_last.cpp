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

node *insert_last(int d, node *head)
{
    node *temp = new node(d);
    if (head == NULL)
    {
        return temp;
    }
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return head;
}

int main()
{
    node *head = NULL;
    head = insert_last(5, head);
    head = insert_last(2, head);
    head = insert_last(4, head);
    head = insert_last(7, head);
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
    return 0;
}