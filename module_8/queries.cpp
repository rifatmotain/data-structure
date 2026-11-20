#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void delete_index(Node* &head, Node* &tail, int index)
{
    if (head == NULL || index < 0) return;
    if(index == 0)
    {
        Node* del = head;
        head = head->next;
        delete del;
        if(head == NULL)
        {
            tail = NULL;
        }
        return;
    }
    Node* temp = head;
    for(int i = 0; i < index-1; i++)
    {
        temp = temp->next;
        if(temp == NULL) break;
    }
    if(temp == NULL|| temp->next ==NULL)
        return;
    Node* del = temp->next;
    temp->next = temp->next->next;
    if(del == tail)
    {
        tail = temp;
    }

    delete del;
}
void print_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
           delete_index(head, tail, v);
        }
        print_list(head);
    }
    return 0;
}