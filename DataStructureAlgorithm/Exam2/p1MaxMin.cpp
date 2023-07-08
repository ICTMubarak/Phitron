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

void printMaxMinFromLinkList(Node *head){
    int Max=head->V;
    int Min=head->V;
    while(head!=NULL){
        //cout<<head->V<<" ";
        if(Max<head->V){
            Max=head->V;
        }
        if(Min>head->V){
            Min=head->V;
        }
        head=head->next;
    }
    cout<<Max<<" "<<Min;
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
    printMaxMinFromLinkList(head);



    return 0;
}