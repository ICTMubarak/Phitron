#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){

     Node  *head = new Node(15);
     Node  *a = new Node(25);
     Node  *b = new Node(35);
     Node  *c = new Node(45);
     Node  *d = new Node(55);


    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;


    cout<<head->val<<endl;
    cout<<head->next->val<<endl;
    cout<<head->next->next->val<<endl;
    cout<<head->next->next->next->val<<endl;
    cout<<head->next->next->next->next->val<<endl;

    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        //if(head->next==NULL)
        //break;
        temp = temp->next;
    }


    return 0;
}