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

class myStack{
    public: 
    vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        if(v.size()==0) return true;
        else return false;
    }
};

int main(){
    int N, tempN, M, tempM;
    cin>>N>>M;
    tempN = N; tempM = M;
    myStack stk;
    myQueue que;
    while(N--){
        int x;
        cin>>x;
        stk.push(x);
    }
    while(M--){
        int x;
        cin>>x;
        que.push(x);
    }

    int chack = 0;
    if(tempN!=tempM){
        cout<<"NO";
    }
    else{
        while(tempN--){
            if(stk.top()!=que.front()){
                chack = 1;
                cout<<"NO";
                break;
            }
            stk.pop();
            que.pop();
        }
        if(chack==0){
            cout<<"YES";
        }
    }


    return 0; 
}