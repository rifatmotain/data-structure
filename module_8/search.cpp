#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node (int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void  insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next=newnode;
    tail=newnode;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
           Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(1)
    {
        cin >> val;
        if (val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    int x;
    cin >> x;
    int index=0;
    int flag=0;
    for (Node* temp = head; temp != NULL; temp = temp->next)
    {
        if (temp->val==x)
        {
            cout << index <<  endl;
            flag=1;
            break;
        }
        index++;
    }

    if (flag== 0)
    {
        cout << -1<< endl;
    }
    }
    return 0;
}