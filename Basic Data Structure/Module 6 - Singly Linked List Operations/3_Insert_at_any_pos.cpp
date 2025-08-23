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

void print_list(Node *head) {
    while(head != NULL) {
        cout<<head->val<<nl;
        head = head->next;
    }
}

void insert_at_head(Node* &head, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = newnode;
}

void insert_at_any_pos(Node* &head, int idx, int val) {
    if (idx == 0) {
        insert_at_head(head,val);
        return;
    }
    
    Node* newnode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<idx; i++) {
        if (tmp == NULL) {
            break;
        }
        tmp = tmp->next;
    }
    if (tmp == NULL) {
        cout<<"Invalid Index"<<nl;
        return;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;

}

int main()
{
    fastIO();
    Node* head = NULL;
    insert_at_any_pos(head, 0, 10);
    insert_at_any_pos(head, 1, 20);
    insert_at_any_pos(head, 3, 20);

    print_list(head);
    
    return 0;
}