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

void printMid(Node *head, int count){
    int chack=0;
    //cout<<count<<endl;
    while(head!=NULL){
        if(chack==count/2){
            cout<<head->V<<" ";
        }
        if((chack==count/2-1)&&(count%2==0)){
            cout<<head->V<<" ";
        }
        chack++;
        head=head->next;
    }
    
}

int main(){

    int val,count=0;
    cin>>val;
    Node *head=NULL;
    while(val!=-1){
       // cout<<val<<" ";
        insertToLinkList(head, val);
        cin>>val;
        count++;
    }

    for(Node *i = head;i->next!=NULL;i=i->next){
        for(Node *j=i->next;j!=NULL;j=j->next){
            if(i->V<j->V){
                swap(i->V,j->V);
            }
        }
    }

    //cout<<count;


    printMid(head,count);
    return 0;
}