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

void print_list(Node* head) {
    while(head != NULL) {
        cout<<head->val<<nl;
        head = head->next;
    }
}

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

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

void insert_at_any_pos(Node* &head, Node* &tail, int idx, int val) {
    if (idx == 0) {
        insert_at_head(head, tail, val);
        return;
    }

    Node* tmp = head;
    for(int i=1; i<idx; i++) {
        if (tmp == NULL) break;
        tmp = tmp->next;
    }

    if (tmp == NULL) {
        cout<<"Invalid Index"<<nl;
        return;
    }

    Node* newnode = new Node(val);
    if (tmp->next == NULL) {
        tail->next = newnode;
        tail = newnode;
    } else {
        newnode->next = tmp->next;
        tmp->next = newnode;
    }
}

int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;

    insert_at_head(head, tail, 30);
    insert_at_head(head, tail, 20);
    insert_at_head(head, tail, 10);
    insert_at_any_pos(head, tail, 3, 5);
    
    print_list(head);
    return 0;
}