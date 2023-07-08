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
void insertToLinkList(Node * &head, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
    }
    else{
        Node *temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

}

void printReverceLinkList(Node *head){
    
    if(head==NULL){
       
       return;
    }
    //else{
       // cout<<head->V<<" ";
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
    while(val!=-1){
       // cout<<val<<" ";
        insertToLinkList(head, val);
        cin>>val;
    }
    printReverceLinkList(head);
    cout<<endl;
    printOriginLinkList(head);



    return 0;
}