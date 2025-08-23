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

Node* input_tree()
{
    int val; cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if (root) q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        Node* lnode = NULL;
        Node* rnode = NULL;

        int l, r;
        cin>>l>>r;

        if(l != -1) lnode = new Node(l); 
        if (r != -1) rnode = new Node(r);

        if (lnode) {
            parent->left = lnode;
            q.push(lnode);
        } 
        if (rnode) {
            parent->right = rnode;
            q.push(rnode);
        } 
            
    }

    return root;
}

void level_order(Node* root)
{
    queue<Node*> q;
    if (root) q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        cout<<f->val<<" ";

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
    cout<<endl;
}
int main()
{
    fastIO();
    Node* root = input_tree();
    level_order(root);
    
    return 0;
}