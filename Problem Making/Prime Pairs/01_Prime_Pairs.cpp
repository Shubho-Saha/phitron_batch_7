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

bool isPrime(int x) {
    if (x == 1 ) return false;
    if ( x == 2 ) return true;

    for(int i=2; i*i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
void solve()
{
    int n; 
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    stack<int> st;
    for(int i=0; i<n; i++) {
        int crnt = v[i];
        if (isPrime(crnt)) {
            if (!st.empty() && isPrime(st.top())) {
                st.pop();
            } else st.push(crnt);
        } else {
            st.push(crnt);
        }
    }

    ll res = 0;
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }

    cout<<res<<nl;
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}