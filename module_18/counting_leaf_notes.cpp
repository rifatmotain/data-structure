#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
    int val;
    Node* left;
    Node* right;
    Node (int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* tree_input()
{
    int val;
    cin >> val;
    Node* root = new Node (val);
    queue <Node*> q;
    while (q.empty()!= false)
    {
        Node* p = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        Node* myleft, *myright;
        if (l==-1) myleft = NULL;
        else myleft = new Node(l);
        if (r==-1) myleft = NULL;
        else myleft = new Node(r);
        p->left=myleft;
        p->right=myright;
        if (p->left!=NULL) q.push(p->left);
        if (p->right != NULL) q.push (p->right);
    }
    return root;
}

int count_leaf_nodes (Node* root)
{
    if (root ==NULL)
    return 0;
    if (root->left== NULL && root->right== NULL)
    return 1;
    int l = count_leaf_nodes (root->left);
    int r = count_leaf_nodes (root->right);
    return l+r;
}
int main ()
{
    Node* root = tree_input();
    count_leaf_nodes (root);
    return 0;
}