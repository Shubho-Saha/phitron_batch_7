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
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    head->next = b;
    head->next->next = c;

    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<nl;
        tmp = tmp->next;
    }
    
    return 0;
}