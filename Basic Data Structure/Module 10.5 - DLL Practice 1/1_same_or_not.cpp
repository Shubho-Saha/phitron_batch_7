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
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

bool same_or_not(Node* head1, Node* head2)
{
    while(head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val) return false;
        head1 = head1->next;
        head2 = head2->next;
    }

    return (head1 == NULL && head2 == NULL);
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
    Node* head1 = NULL;
    Node* tail1 = NULL;

    while(true)
    {
        int x; cin>>x;
        if (x == -1 ) break;
        insert_at_tail(head1, tail1, x);
    }

    print_list(head1);

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true)
    {
        int x; cin>>x;
        if (x == -1 ) break;
        insert_at_tail(head2, tail2, x);
    }

    print_list(head2);
    if (same_or_not(head1, head2)) {
        cout<<"Same"<<nl;
    } else {
        cout<<"Not same"<<nl;
    }
    
    return 0;
}