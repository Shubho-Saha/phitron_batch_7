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

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if (head == NULL) 
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

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

int size_list(Node* head)
{
    int cnt = 0;
    while(head != NULL)
    {
        cnt++;
        head = head->next;
    }

    return cnt;
}

void delete_head(Node* &head, Node* &tail)
{
    if (head == NULL) return;

    if (head->next == NULL) {
        Node* dltnode = head;
        head = NULL;
        tail = NULL;
        delete dltnode;
        return;
    }

    Node* dltnode = head;
    head = head->next;
    delete dltnode;

}

void delete_tail(Node* &head, Node* &tail)
{
    if (head == NULL) return;
    if (head->next == NULL)
    {
        Node* dltnode = head;
        head = NULL;
        tail = NULL;
        delete dltnode;
        return;
    }

    Node* tmp = head;
    while(tmp->next->next != NULL) {
        tmp = tmp->next;
    }

    Node* dltnode = tmp->next;
    tmp->next = NULL;
    tail = tmp;
    delete dltnode;
}

void delete_at_any_pos(Node*& head, Node* &tail, int pos)
{
    if (pos == 0) {
        delete_head(head, tail);
        return;
    }
    
    Node* tmp = head;
    for(int i=1; i<pos; i++) {
        tmp = tmp->next;
    }

    if (tmp->next->next == NULL) {
        delete_tail(head, tail);
        return;
    }

    Node* dltnode = tmp->next;
    tmp->next = tmp->next->next;
    delete dltnode;

}

void print_list(Node* head) 
{
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}


int main()
{
    fastIO();
    Node* head = NULL;
    Node* tail = NULL;


    int q;
    cin>>q;
    while(q--)
    {
        int x, v;
        cin>>x>>v;

        if (x == 0) {
            insert_at_head(head, tail, v);
            print_list(head);
        } else if (x == 1) {
            insert_at_tail(head, tail, v);
            print_list(head);
        } else {
            int ln = size_list(head);
            if (v < 0 || v >= ln) {
                print_list(head);
            } else {
                delete_at_any_pos(head, tail, v);
                print_list(head);
            }
        }
    }
    
    return 0;
}