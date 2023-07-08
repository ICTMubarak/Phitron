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

void insertToDLL(Node * &head, Node * &tail, int val){
    if(head==NULL && tail==NULL){
        Node *newNode = new Node(val);
        head=newNode;
        tail=newNode;
    }
    else{
        Node *newNode = new Node(val);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        tail->next=NULL;
    }

}




int main(){

     Node *head = NULL;
     Node *tail = NULL;

    int val;
    cin>>val;
    while(val!=-1){
        insertToDLL(head, tail, val);
        cin>>val;
    }

   printNormal(head);
   cout<<endl;
   printRev(tail);

    return 0;
}