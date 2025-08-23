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
    list<string> mylist;

    string s;
    while(true)
    {
        cin>>s;
        if (s == "end") break;
        mylist.push_back(s);
    }

    int q; cin>>q;
    string com, add;
    // list<string>::iterator current, tmp;
    auto current = mylist.begin();
    auto tmp = current;

    while(q--)
    {
        cin>>com;
        if (com == "visit") {
            cin>>add;
            tmp = current;
            current = find(mylist.begin(), mylist.end(), add);
            if (current == mylist.end()) {
                cout<<"Not Available"<<nl;
                current = tmp;
            } else {
                cout<<*current<<nl;
            }

        } else if (com == "next") {
            auto last = --mylist.end();
            if (current == last) {
                cout<<"Not Available"<<nl;
            } else {
                current++;
                cout<<*current<<nl;
            }
        } else {
            if (current == mylist.begin()) {
                cout<<"Not Available"<<nl;
            } else {
                current--;
                cout<<*current<<nl;
            }
        }
    }
    
    return 0;
}