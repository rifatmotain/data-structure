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

void printing_link_list (Node* head)
{
    Node* temp= head;
    while (temp != NULL)
    {
    cout << temp->val << " ";
    temp = temp->next;
    }

}

void remove_duplicate(Node* &head)
{
    for(Node* i = head; i != NULL; i = i->next)
{
    Node* prev = i;
    for(Node* j = i->next; j != NULL;  j = prev->next )
    {
        if(i->val == j->val)
        {
            prev->next = j->next;
            delete j;
        }
        else
        {
            prev = j;
            j = j->next;
        }
    }
}
}
int main ()
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
    remove_duplicate(head);
    printing_link_list (head);
    return 0;
}