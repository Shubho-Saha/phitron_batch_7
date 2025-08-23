#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void Node_input(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void delete_any_pos(Node* head,int indx)
{
   Node*tmp=head;
   for(int i=1;i<indx;i++)
   {
      tmp=tmp->next;
   }
   Node* deletenode=tmp->next;
   tmp->next=tmp->next->next;
   delete deletenode;

}
void print_list(Node*head)
{
    Node* tmp=head;
    while(head != NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        Node_input(head,tail,v);
    }
    delete_any_pos(head,2);
    print_list(head);
    return 0;
}