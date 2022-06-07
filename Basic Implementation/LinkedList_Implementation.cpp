#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void display(Node *head)
{
    Node *curr=head;
    while(curr)
    {
        cout<<curr->data<<" ";

        curr=curr->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(29);
    head->next->next=new Node(123);
    head->next->next->next=new Node(352);

    display(head);

    return 0;
}
