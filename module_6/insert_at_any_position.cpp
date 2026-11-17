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

void  insert_at_head(Node* &head, int index, int val)
{
    Node* newnode = new Node (val);
    Node* temp=head;
    
    for (int i=0; i<index; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void printing_link_list (Node* head)
{
    Node* temp= head;
    while (temp != NULL)
    {
    cout << temp->val << endl;
    temp = temp->next;
    }

}
int main ()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next=a;
    a->next=b;

    insert_at_head (head,1,100);
    printing_link_list(head);
    return 0;
}