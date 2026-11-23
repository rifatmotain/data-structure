#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin >> n >> m;
    stack <int> s;
    for (int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    queue<int> q;
    for (int i=0; i<m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    int temp = 0;

    if (n!=m)
    {
        cout << "NO";
    }
    else
    {
        while (s.empty()==false)
    {
        if (s.top()!=q.front())
        {
            temp=1;
        }
        s.pop();
        q.pop();
    }

    if (temp==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    }
    return 0;
}