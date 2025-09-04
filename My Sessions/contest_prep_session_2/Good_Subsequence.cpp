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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        int cnt1 = 0, cnt2 = 0;
        bool flag = 0;

        for(int i=0; i<n; i++)
        {
            if(v[i] % 2 == flag) {
                cnt1++;
                flag = !flag;
            }
        }

        flag = 1;
        for(int i=0; i<n; i++)
        {
            if (v[i] % 2 == flag) {
                cnt2++;
                flag = !flag;
            }
        }

        cout<<max(cnt1, cnt2)<<endl;


    }
    
    return 0;
}