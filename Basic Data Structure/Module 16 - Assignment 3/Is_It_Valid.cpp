#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

int main()
{
    fastIO();
    int t;
    cin>>t;

    while(t--)
    {
        stack<char> st;
        string s;
        cin>>s;

        for(auto c : s) {
            if (c == '0') {
                if (!st.empty() && st.top() == '1') {
                    st.pop();
                } else {
                    st.push(c);
                }
            } else {
                if (!st.empty() && st.top() == '0') {
                    st.pop();
                } else {
                    st.push(c);
                }
            }
        }

        if (st.empty()) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}