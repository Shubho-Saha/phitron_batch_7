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
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node* root)
{
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();
        cout<<parent->val<<" ";

        if (parent->left) {
            q.push(parent->left);
        }

        if (parent->right) {
            q.push(parent->right);
        }
    }
}

int main()
{
    fastIO();
    
    Node* root = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);

    root->left = b;
    root->right = c;

    b->left = d;
    c->left = e;
    c->right = f;

    level_order(root);
    return 0;
}