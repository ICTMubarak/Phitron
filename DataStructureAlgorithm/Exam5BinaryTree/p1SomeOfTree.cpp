#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


int someOfNodeVal(Node* root){
    queue<Node*> q;
    q.push(root);
    int sum=0;
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        sum = sum + f->val;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return sum;
}

Node* lavelTreeInput(){
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int L, R;
        cin>>L>>R;
        Node* lft;
        Node* rgt;
        if(L==-1) lft = NULL;
        else lft = new Node(L);
        if(R==-1) rgt = NULL;
        else rgt = new Node(R);

        f->left=lft;
        f->right=rgt;
 
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return root;
}

int main(){
Node* root = lavelTreeInput();
int x = someOfNodeVal(root);
cout<<x;
return 0; 
}