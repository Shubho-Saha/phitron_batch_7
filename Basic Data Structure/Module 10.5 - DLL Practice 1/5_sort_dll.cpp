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
    newnode->prev = tail;
    tail = newnode;
}

void sort_list(Node* &head)
{
    Node* left = head;
    while(left->next != NULL)
    {
        Node* right = left->next;
        while(right != NULL)
        {
            if (left->val > right->val) {
                swap(left->val, right->val);
            }
            right = right->next;
        }
        left = left->next;
    }
}

void print_list(Node* head)
{
    while(head != NULL)
    {
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
    int x;
    while(true)
    {
        cin>>x;
        if (x == -1) break;
        insert_at_tail(head, tail, x);
    }

    print_list(head);
    sort_list(head);
    print_list(head);
    
    return 0;
}