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

int size(Node *head){
    Node *temp = head;
    int i=0;
    while(temp!=NULL){
         temp=temp->next;
         i++;
    }
        return i; 
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int val){
   
    if(pos==0){
       Node *newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
    return;
    }

    else if(pos>=size(head)){
        if(pos==size(head)){
            Node *newNode = new Node(val);
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
            return;
        }
        else{
             cout<<"Invalide";
            return;
        }
       
    }

    else if(pos<0){
             cout<<"Invalide";
            return;
        }

    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;

    newNode->next->prev=newNode;

}



int main(){

    // Node *head = NULL;
    // Node *tail = NULL;

   Node *head = new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *tail = new Node(40);
    


   //connection
   head->next = a;
   a->prev=head;
   a->next=b;
   b->prev=a;

   b->next=tail;
   tail->prev=b;



   printNormal(head);
   cout<<endl;
   printRev(tail);
   cout<<endl;
   insertAtPosition(head, tail, -2, 60);

   printNormal(head);
   cout<<endl;
   printRev(tail);




    return 0;
}