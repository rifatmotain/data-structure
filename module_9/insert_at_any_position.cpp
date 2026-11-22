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

void insert_at_any_pos(Node* &head, int index, int val)
{
    Node* temp= head;
    for (int i=1; i<index;i++)
    {
        temp=temp->next;
    }
    Node* newnode = new Node (val);
    newnode->next=temp->next;
    temp->next->pre=newnode;
    temp->next=newnode;
    newnode->pre=temp;

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
    insert_at_any_pos(head, 2, 100);
    print_forward(head);
    return 0;
}