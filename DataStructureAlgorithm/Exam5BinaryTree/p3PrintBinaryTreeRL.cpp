#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    int level;
    Node* left;
    Node* right;
    Node(int val, int level){
        this->val=val;
        this->level=level;
        this->left=NULL;
        this->right=NULL;
    }
};

void printBrinaryTreeLavelWise(Node* root,int x){
    queue<Node*> q;
    q.push(root);
    int level = root->level;
    int chack = 0;
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        if(f->level == x){
            cout<<f->val<<" ";
            chack = 1;
        }

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    if(chack==0)
    cout<<"Invalid";
    }

int countMaxLevel(Node* root){
    queue<Node*> q;
    q.push(root);
    int level;
   
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        level = f->level;
    }
    return level;
}


Node* lavelTreeInput(int level){
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root = new Node(val,level);
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
        else lft = new Node(L,f->level+1);
        if(R==-1) rgt = NULL;
        else rgt = new Node(R,f->level+1);

        f->left=lft;
        f->right=rgt;
 
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return root;
}


int main(){
Node* root = lavelTreeInput(0);
int x = countMaxLevel(root);
do{
    printBrinaryTreeLavelWise(root,x);
}while(x--);


return 0; 
}