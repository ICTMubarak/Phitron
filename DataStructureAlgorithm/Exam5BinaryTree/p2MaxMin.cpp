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

void maxMinLeaf(Node* root){
    queue<Node*> q;
    queue<int> mxmin;
    q.push(root);
    int sum=0;
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        sum = sum + f->val;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        if((f->left==NULL)&&(f->right==NULL)) mxmin.push(f->val);
    }
    int max, min;
    max=mxmin.front();
    min=mxmin.front();
    while(!mxmin.empty()){
        max=max>mxmin.front()?max:mxmin.front();
        min=min<mxmin.front()?min:mxmin.front();
        mxmin.pop();
    }
    cout<<max<<" "<<min;
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
maxMinLeaf(root);

return 0; 
}