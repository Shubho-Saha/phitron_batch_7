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

    int n; cin>>n;

    int mid = n/2;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i==mid && j == mid) {
                cout<<"A";
            } else if ( i == j) {
                cout<<"Z";
            } else if ( i+j == n-1) {
                cout<<"Y";
            } else {
                cout<<"B";
            }
        }
        cout<<endl;
    }

    return 0;
}