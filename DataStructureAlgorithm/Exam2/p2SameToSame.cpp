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

void chackLinkList(Node *head1, Node *head2){
    int chack=0;
    while(head1!=NULL||head2!=NULL){
       if(head1==NULL||head2==NULL){
        cout<<"NO";
        chack=1;
        break;
       }

       if(head1->V!=head2->V){
        cout<<"NO";
        chack=1;
        break;
       }

       if(head1!=NULL&&head2!=NULL){
        head1=head1->next;
        head2=head2->next;
       }
        
    }
    if(chack==0)
    cout<<"YES";
    
}

int main(){

    int val;
    cin>>val;
    Node *head1=NULL;
    while(val!=-1){
       // cout<<val<<" ";
        insertToLinkList(head1, val);
        cin>>val;
    }
    cin>>val;
    Node *head2=NULL;
    while(val!=-1){
       // cout<<val<<" ";
        insertToLinkList(head2, val);
        cin>>val;
    }

    chackLinkList(head1,head2);

    return 0;
}