#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* pre;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void print_forward(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail)
{
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->pre;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->pre = head;

    a->next = b;
    b->pre = a;

    b->next = tail;
    tail->pre = b;
    print_forward(head);
    print_backward(tail);

    return 0;
}