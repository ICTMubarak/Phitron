#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int V;
    Node *next;

    Node(int V){
        this->V=V;
        this->next=NULL;
    }
};
void insertToLinkList(Node * &head, Node * &tail, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next=newNode;
    tail=newNode;
    
}

void printReverceLinkList(Node *head){
    
    if(head==NULL){
       
       return;
    }
    //else{
        
        //head=head->next;
        printReverceLinkList(head->next);
    //}
    
    cout<<head->V<<" ";
    
}

void printOriginLinkList(Node *head){
    while(head!=NULL){
        cout<<head->V<<" ";
        head=head->next;
    }

}

int main(){

    int val;
    cin>>val;
    Node *head=NULL;
    Node *tail=NULL;
    while(val!=-1){
       // cout<<val<<" ";
        insertToLinkList(head, tail, val);
        cin>>val;
    }
    printReverceLinkList(head);
    cout<<endl;
    printOriginLinkList(head);



    return 0;
}