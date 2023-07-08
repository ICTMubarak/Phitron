#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *prev;
    Node *next;
    Node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

void printNormal(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

void printRev(Node *tail){
    Node *temp = tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}

int main(){

   Node *a = new Node(10);
   Node *b = new Node(20);
   Node *c = new Node(30);
   Node *head=a;
   a->next=b;
   b->next=c; 

   Node *tail = c;
   c->prev=b;
   b->prev=a;



   printNormal(head);
   cout<<endl;
   printRev(tail);

    return 0;
}