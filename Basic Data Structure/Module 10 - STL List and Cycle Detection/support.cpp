#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next, *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class mystack
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    void top()
    {
        if (tail == NULL)
        {
            return;
        }
        cout << tail->val << " ";
    }
    bool empty()
    {
        
        return head==NULL;
    }
    void size()
    {
        cout << "Size is:" << sz << endl;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // mystack *st = new mystack();
    mystack st;    
    int n;
    cin>>n;
        int val;

    for(int i=0;i<n;i++)
    {
        cin>>val;
        st.push(val);
    }
    while(!st.empty())
    {
        st.top();
        st.pop();
    }

    return 0;
}