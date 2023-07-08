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
        return i-1; 
}

void deleteNode(Node * &head, Node * &tail, int pos){
    if(pos<0||pos>size(head)){
        cout<<"Invalide";
    }
    else if(pos==0){
        
        head=head->next;
        head->prev=NULL;
        
    }
    else if(pos==size(head)){
        // Node *temp = tail->prev;
        // tail->prev->next=NULL;
        // tail=temp;
        tail->prev->next=NULL;
        tail = tail->prev;
    }
    else{
        Node *del = head;
        int i = 1;
        while(i!=pos){
           del=del->next;
           i++;
        }
         del->next=del->next->next;
            del->next->prev=del;

    }
    
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
   deleteNode(head, tail, 3);
   cout<<endl;

   printNormal(head);
   cout<<endl;
   printRev(tail);




    return 0;
}