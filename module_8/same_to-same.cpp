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
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(1)
    {
        cin >> val;
        if (val==-1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(1)
    {
        cin >> val;
        if (val==-1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    int flag=1;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val!=head2->val)
        {
            flag =0;
        }
        head1= head1->next;
        head2=head2->next;
    }

    if (head1 != NULL || head2 != NULL)
    {
        flag = 0;
    }

    if (flag==0)
    {
        cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}