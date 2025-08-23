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
    if (head == NULL) {
        cout<<"Empty List"<<nl;
        return;
    }
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<nl;
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

void delete_at_head(Node* &head, Node* &tail) {
    Node* firstNode = head;
    if (head == NULL) return;
    if (head->next == NULL) {
        head = NULL;
        tail = NULL;
    } else {
        head = head->next;
    }
    delete firstNode;
}

void delete_at_any_pos(Node* &head, Node* &tail, int idx)
{
    if (head == NULL) return;
    if (idx == 0) {
        delete_at_head(head, tail);
    } else {
        Node* tmp = head;
        for(int i=1; i<idx; i++) {
            tmp = tmp->next;
            if (tmp == NULL) break;
        }
        if (tmp == NULL || tmp->next == NULL) {
            cout<<"Invalid index"<<nl;
            return;
        }

        Node* dltElem = tmp->next;
        if (dltElem->next == NULL) {
            tail = tmp;
            tail->next = NULL;
            delete dltElem;
        } else {
            tmp->next = dltElem->next;
            delete dltElem;
        }
    }
}

int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int x; cin>>x;
        if (x == -1) break;
        insert_at_tail(head, tail, x);
    }

    print_list(head);
    delete_at_any_pos(head, tail, 0);
    print_list(head);
    delete_at_any_pos(head, tail, 4);
    delete_at_any_pos(head, tail, 3);
    print_list(head);
    delete_at_any_pos(head, tail, 1);
    print_list(head);
    delete_at_head(head, tail);
    print_list(head);
    delete_at_any_pos(head, tail, 0);
    print_list(head);
    delete_at_any_pos(head, tail, 7);
    
    
    return 0;
}