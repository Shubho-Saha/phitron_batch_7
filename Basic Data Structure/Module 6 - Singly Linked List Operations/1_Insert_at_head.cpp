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

void insert_at_head(Node* &head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<nl;
        tmp = tmp->next;
    }
}

int main()
{
    fastIO();
    Node *head = NULL;
    insert_at_head(head,10);
    insert_at_head(head,20);
    insert_at_head(head,30);
    
    print_list(head);
    
    return 0;
}