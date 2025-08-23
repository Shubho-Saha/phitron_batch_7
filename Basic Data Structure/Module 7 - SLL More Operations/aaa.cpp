#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
bool duplicate_value(Node* &head,int val)
{
    int freq[101]={0};
    Node *tmp = head;
    bool flag = false;
    while (tmp != NULL)
    {
         int val=tmp->val;
         freq[val]++;
         if (freq[val] > 1) {
            flag = true;
         }
         
        // cout << tmp->val << endl;
        
        tmp = tmp->next;
    }
    
    return flag;
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(4);
    Node *b = new Node(8);
    Node *c = new Node(6);
    Node *d = new Node(2);
    Node *e = new Node(1);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;


    return 0;
}