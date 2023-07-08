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

class myQueue{
   public:
   Node *head = NULL;
   Node *tail = NULL;
   int sz = 0;

   void push(int val){
    Node *newNode = new Node(val);
    sz++;
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail = tail->next;
   }

   void pop(){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head==NULL){
        tail=NULL;
    }
    sz--;
   }

   int front(){
    return head->val;
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