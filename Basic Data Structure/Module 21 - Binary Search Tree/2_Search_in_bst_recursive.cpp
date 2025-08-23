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

void insert_bst(Node* &root, int val)
{
    if (root == NULL) {
        root = new Node(val);
        return;
    }

    if (val > root->val) {
        if (root->right == NULL) {
            root->right = new Node(val);
        } else {
            insert_bst(root->right, val);
        }
    } else if (val < root->val) {
        if (root->left == NULL) {
            root->left = new Node(val);
        } else {
            insert_bst(root->left, val);
        }
    }
}

void print_level(Node* root)
{
    if (root == NULL) {
        cout<<"Empty List"<<nl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* parent = q.front();
        q.pop();

        cout<<parent->val<<" ";

        if (parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    cout<<nl;
}

bool search(Node* root, int val) 
{
    if (root == NULL) return false;
    if (root->val == val) return true;
    if (val < root->val) {
        return search(root->left, val);
    } else if (val > root->val) {
        return search(root->right, val);
    }
}
int main()
{
    fastIO();
    
    Node* root = NULL;
    int val;
    while(cin>>val && val != -1) {
        insert_bst(root, val);
    }

    print_level(root);
    if (search(root, 115)) {
        cout<<"Value Found"<<nl;
    } else {
        cout<<"Value not found"<<nl;
    }
    return 0;
}