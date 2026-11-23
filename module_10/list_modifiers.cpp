#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> l={10,20,30};
    list<int> l2=l;
    // l.push_back(300);
    // l.push_front(400);
    // l2.pop_back();
    // l2.pop_front();
    l.insert(next(l.begin(),2),100);
    for (int val : l)
    {
        cout << val << endl;
    }
    // for (int val : l2)
    // {
    //     cout << val << endl;
    // }
}