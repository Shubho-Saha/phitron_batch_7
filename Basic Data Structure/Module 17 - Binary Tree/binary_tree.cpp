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

void preorder(Node* root)
{
    if (root == NULL) return;

    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root)
{
    if (root == NULL) return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(Node* root)
{
    if (root == NULL) return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
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

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    
    return 0;
}