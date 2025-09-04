#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};



vector <int> v;
void left_node(Node* root, int l)
{
    bool f[3000] = {false};
    queue<pair<Node*,int>> q;
    if(root)
       q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int> p = q.front();
        q.pop();
        Node* node = p.first; int level = p.second;

        if(f[level] == false){
           v.push_back(node->val);
           f[level] = true;
        }
        
        if(node->left)
           q.push({node->left,level+1});
        if(node->right)
           q.push({node->right,level+1});

    }
}

void right_node(Node* root)
{
    if(root != NULL) 
       cout << root->val << endl;
    while(root != NULL)
    {
        if(root->right){
           root = root->right;
        }
        else {
            root = root->left;
        }
        if (root == NULL) break;
        cout << root->val << endl;
        
    }

}

Node* input_tree()
{
    int val; cin >> val;
    Node* root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
      
        Node* p = q.front(); // ber kore anaa
        q.pop();

        int l,r ; cin >> l >> r;
        Node* myleft, *myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;


        // children push
        if(p->left != NULL)
           q.push(p->left);
        if(p->right != NULL)
           q.push(p->right);

    }
    return root;
}

int main()
{
    Node* root = input_tree();
    //left_node(root,0);
   // reverse(v.begin(),v.end());
    right_node(root);

    // auto it = v.begin();
    // while(it != v.end())
    // {
    //     cout << *it <<" ";
    //     it++;
    // }
    

    
    return 0;
}