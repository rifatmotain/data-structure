#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> l(10,4);
    list<int> l2= {1,2,3,4,5};
    int a[]={10,20,30};
    list<int> l3(l2);
    list<int> l4(a,a+3);
    // for ( auto it =l.begin(); it!=l.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    l.clear();
    for (int val : l)
    {
        cout << val << endl;
    }
}