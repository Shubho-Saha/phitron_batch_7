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

void insert_at_head(Node* &head, Node* &tail, int val)
{
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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

bool insert_at_any_pos(Node* &head, Node* &tail, int idx, int val)
{
    if (idx == 0) {
        insert_at_head(head, tail, val);
        return true;
    }

    Node *tmp = head;
    for(int i=1; i<idx; i++) {
        if (tmp == NULL) break;
        tmp = tmp->next;
    }

    if (tmp == NULL) {
        return false;
    }

    if (tmp->next == NULL) {
        insert_at_tail(head, tail, val);
        return true;
    }

    Node *newnode = new Node(val);
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
    return true;
}

void print_left(Node* head) {
    cout<<"L -> ";
    while(head != NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<nl;
}

void print_right(Node* tail) {
    cout<<"R -> ";
    while(tail != NULL)
    {
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<nl;
}

int main()
{
    fastIO();
    Node *head = NULL;
    Node *tail = NULL;
    int q; cin>>q;
    while(q--)
    {
        int x, v;
        cin>>x>>v;
        bool flag = insert_at_any_pos(head,tail, x, v);
        if (flag) {
            print_left(head);
            print_right(tail);
        } else {
            cout<<"Invalid"<<nl;
        }

    }
    
    return 0;
}