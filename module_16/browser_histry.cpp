#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list <string > l;
    string x;
    while (cin >> x && x!= "end")
    {

        l.push_back(x);
    }

    int q;
    cin >> q;

    auto a=l.begin();
    while (q--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string address;
            cin >> address;
            auto it=find (l.begin(),l.end(),address);
            if (it!=l.end())
            {
                a= it;
                cout << *a<< endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto it1= a;
            it1++;
            if ( it1!=l.end())
            {
                a=it1;
                cout << *a << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if ( a!=l.begin())
            {
                a--;
                cout << *a << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
    return 0;
}