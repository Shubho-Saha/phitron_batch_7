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
    Node *prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void reverse_list(Node* head, Node* tail)
{
    // Node* left = head, *right = tail;
    // while(left != right && left->prev != right)
    // {
    //     swap(left->val, right->val);
    //     left = left->next;
    //     right = right->prev;
    // }

    for(Node* i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
        // i = i->next;
        // j = j->prev;
    }
}

void print_list(Node* head) {
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<nl;
}

int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int x; cin>>x;
        if (x == -1 ) break;
        insert_at_head(head, tail, x);
    }

    print_list(head);
    reverse_list(head, tail);
    print_list(head);
    
    return 0;
}