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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void print_list(Node* head) {
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<nl;
}

void reverse_list(Node* &head, Node* &tail, Node* tmp) {
    if (tmp->next == NULL) {
        head = tmp;
        return;
    }
    reverse_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}


int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;
    int x;
    while(true)
    {
        cin>>x;
        if (x == -1) break;
        insert_at_tail(head, tail, x);
    }

    print_list(head);
    reverse_list(head, tail, head);
    print_list(head);
    
    return 0;
}