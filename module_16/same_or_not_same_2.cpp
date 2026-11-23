#include<bits/stdc++.h>
using namespace std;

    class mystack
    {
        public:
        vector<int> v;
        void push (int val)
        {
            v.push_back(val);
        }
        void pop ()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size ()
        {
           return v.size();
        }
        bool empty()
        {
            return v.empty();
        }
    };

        class myqueue
    {
        public:
        list<int> l;
        void push (int val)
        {
            l.push_back(val);
        }
        void pop ()
        {
            l.pop_front();
        }
        int front()
        {
            return l.front();
        }
        int size ()
        {
           return l.size();
        }
        bool empty()
        {
            return l.empty();
        }
    };

int main ()
{
    int n,m;
    cin >> n >> m;
    mystack s;
    for (int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    myqueue q;
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