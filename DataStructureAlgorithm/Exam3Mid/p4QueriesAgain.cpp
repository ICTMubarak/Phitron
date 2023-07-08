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
        cout<<" "<<temp->val;
        temp=temp->next;
    }
    //if(head!=NULL)
    cout<<endl;
}

void printRev(Node *tail,int Q){
    Node *temp = tail;
    
    while(temp!=NULL){
        cout<<" "<<temp->val;
        temp=temp->prev;
    }
    if(Q==1)
    return;
    cout<<endl;
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

void insertAtPosition(Node *&head, Node *&tail, int pos, int val, int *chack){
   
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
             cout<<"Invalid"<<endl;
             *chack = 1;
            return;
        }
       
    }

    else if(pos<0){
             cout<<"Invalid"<<endl;
             *chack = 1;
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

     Node *head = NULL;
     Node *tail = NULL;

int Q, X, V;
cin>>Q;
while (Q){
    cin>>X>>V;
    int x=0;
    int *chack; 
    chack = &x;
    insertAtPosition(head, tail, X, V, chack);
    if(*chack==1){
        Q--;
        continue;
    }
    
    if(head!=NULL)
    cout<<"L ->";
    printNormal(head);
    if(tail!=NULL)
    cout<<"R ->";
    printRev(tail,Q);
    Q--;
}

    return 0;
}