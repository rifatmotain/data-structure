#include <bits/stdc++.h>
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

void insert_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node (val);
    if (head==NULL)
    {
        head= newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
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
    insert_head(head,tail,100);
    print_forward(head);
    return 0;
}