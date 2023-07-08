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

void insertReverceLinkList(Node *head, Node * &headRev, Node * &tailRev){
    if(head==NULL){
       return;
    }
        insertReverceLinkList(head->next, headRev, tailRev);
        insertToLinkList(headRev,tailRev,head->V);
}

void printLinkList(Node *head){
    while(head!=NULL){
        cout<<head->V<<" ";
        head=head->next;
    }
}

void chackPalendrom(Node *head, Node *headRev, int n){
    int chack=0;
    while(n){
        if(head->V!=headRev->V){
            chack=1;
            cout<<"NO";
            break;
        }
        head=head->next;
        headRev=headRev->next;
        n--;
    }
    if(chack==0)
    cout<<"YES";

}

int main(){

    int val, count=0;
    cin>>val;
    Node *head=NULL;
    Node *tail=NULL;
    Node *headRev=NULL;
    Node *tailRev=NULL;
    while(val!=-1){
        insertToLinkList(head, tail, val);
        cin>>val;
        count++;
    }
    //cout<<count<<endl;
    insertReverceLinkList(head, headRev, tailRev);
    // printLinkList(head);
    // cout<<endl;
    // printLinkList(headRev);
    chackPalendrom(head, headRev, count/2);
    return 0;
}