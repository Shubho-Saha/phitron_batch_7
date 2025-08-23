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

Node* arrayToBst(int *arr, int l, int r) {
    if (l > r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(arr[mid]);
    Node* leftRoot = arrayToBst(arr, l, mid-1);
    Node* rightRoot = arrayToBst(arr, mid+1, r);

    root->left = leftRoot;
    root->right = rightRoot;
    return root;
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


int main()
{
    fastIO();
    int n; 
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    for(auto x : arr) {
        cout<<x<<" ";
    }
    cout<<nl;

    Node* root = arrayToBst(arr, 0, n-1);
    print_level(root);
    
    return 0;
}