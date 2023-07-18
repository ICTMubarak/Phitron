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

int countLeaf(Node* root){

    if(root == NULL) return 0; 
    if((root->left == NULL)&&(root->right== NULL)) return 1;
    else{
        int l =  countLeaf(root->left);
        int r =  countLeaf(root->right);
         return l + r;
}
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
        //1. Queue thke ber koro
        Node* f = q.front();
        q.pop();

        //2. zabotio kaj
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

        //3. childrean guluke push koro. 
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return root;
}

int main(){
Node* root = lavelTreeInput();
//nodeCount(root);
int x = countLeaf(root);
cout<<" "<<x;
return 0; 
}