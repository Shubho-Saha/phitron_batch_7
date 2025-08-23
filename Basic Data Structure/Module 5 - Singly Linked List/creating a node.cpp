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

class Node
{
    public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    fastIO();
    Node a(10), b(20), c(30);
    a.next = &b;
    b.next = &c;

    cout<<a.val<<nl;
    cout<<(*a.next).val<<nl;
    cout<<a.next->val<<nl;
    cout<<a.next->next->val<<nl;
    
    return 0;
}