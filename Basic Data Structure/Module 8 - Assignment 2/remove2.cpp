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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void print_list(Node* head) 
{
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

void duplicate(Node* head)
{
    Node* left = head;
    while(left->next != NULL)
    {
        Node *right = left;
        while(right->next != NULL)
        {
            if (left->val == right->next->val) {
                Node* dltnode = right->next;
                right->next = right->next->next;
                delete dltnode;
            } else {
                right = right->next;
            }
        }
        left = left->next;
    }
}

int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;

    int v;
    while(true)
    {
        cin>>v;
        if (v == -1 ) break;
        insert_at_tail(head, tail, v);
    }

    print_list(head);
    
    return 0;
}