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
    cout << "L -> ";
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
    cout << "R -> ";
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->pre;
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

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node (val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next= newnode;
    newnode->pre=tail;
    tail=newnode;
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
    int q;
    cin >> q;
    Node* head = NULL;
    Node* tail = NULL;
    int size=0;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x<0 || x>size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (x==0)
            {
                insert_head(head, tail, v);
            }
            else if (x==size)
            {
                insert_tail(head, tail,v);
            }
            else
            {
                insert_at_any_pos(head, x, v);
            }
            print_forward(head);
            print_backward(tail);
            size++;
        }
    }
    return 0;
}