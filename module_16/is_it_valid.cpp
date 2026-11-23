#include<bits/stdc++.h>
using namespace std;
int main ()
{ 
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack <char> st;
        for (char ch : s)
        {
            if (st.empty()==true)
            {
                st.push(ch);
            }
            else if (st.top()!= ch)
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty()==true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}