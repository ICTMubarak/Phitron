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
void insertToHead(Node * &head, Node * &tail, int val){
   Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next=head;
    head=newNode;
    
}

void insertToTail(Node * &head, Node * &tail, int val){
  Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next=newNode;
    tail=newNode;

}

void prinLinkList(Node *head, Node *tail){
    cout<<head->V<<" "<<tail->V;
   
}

int main(){
int T,chack,val;
cin>>T;
Node *head=NULL;
Node *tail=NULL;
while(T){
cin>>chack>>val;
if(chack==0)
insertToHead(head, tail, val);
if(chack==1)
insertToTail(head, tail, val);
prinLinkList(head, tail);
cout<<endl;
T--;
}


    return 0;
}