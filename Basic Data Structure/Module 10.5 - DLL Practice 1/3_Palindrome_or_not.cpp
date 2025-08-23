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

bool isPalindrome(Node* head, Node* tail)
{
    Node* left = head;
    Node* right = tail;
    while(left != right && left->prev != right)
    {
        if (left->val != right->val) return false;
        left = left->next;
        right = right->prev;
    }

    return true;
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
        insert_at_tail(head, tail, x);
    }

    print_list(head);

    if (isPalindrome(head,tail)) {
        cout<<"Palindrome"<<nl;
    } else {
        cout<<"Not Palindrome"<<nl;
    }
   
    
    return 0;
}