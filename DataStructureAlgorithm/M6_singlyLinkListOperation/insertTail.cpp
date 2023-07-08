#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void print_link_list(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
    
}


void insert_at_tail(Node * &head, int val){
    //cout<<"Head address in insrert fun = "<<&head<<endl;
   Node *newNode =new Node(val);
   cout<<" NewNode address= "<<&newNode<<" NewNode val= "<<newNode<<endl;
   if(head==NULL){
        head=newNode;
   }
   else{
          Node *temp = head;
   while(temp->next != NULL){
        temp=temp->next;
   }
   temp->next=newNode;
   }
}

int main(){

    Node *head=NULL;
    //cout<<"Head Address in main = "<<&head<<endl;
    //int a=10,b=20, c=40;
cout<<"OK";
    while(1){
        cout<<"1 Press for insert"<<endl<<"2 press for print"<<endl<<"3 press for exit"<<endl;
        int t;
        cin>>t;

        if(t==1){
            cout<<"enter a value for insert: ";
            int val;
            cin>>val;
            insert_at_tail(head, val);
        }
        if(t==2){
            print_link_list(head);
        }
        if(t==3){
            break;
        }
        
    }

    return 0; 
}