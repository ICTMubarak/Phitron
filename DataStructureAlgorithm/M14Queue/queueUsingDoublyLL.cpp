#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myQueue{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;

    void push(int val){
        sz++;
        Node *newNode = new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail = tail->next;
    }
    void pop(){
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev=NULL;
        delete deleteNode;
    }
    int size(){
        return sz;
    }
    bool empty(){
    if(sz==0){
        return true;
   }
   else return false;
   }
    int front(){
        return head->val;
    }
};

int main(){

    myQueue que;
   int n;
   cin>>n;
   while(n--){
    int x;
    cin>>x;
    que.push(x);
   }

   while(!que.empty()){
    cout<<que.front()<<" ";
    que.pop();
   }

    return 0;
}