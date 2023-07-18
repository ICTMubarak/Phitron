#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(Node *root){

    if(root==NULL) return;
    
    preOrder(root->left);
    cout<<root->val<<" ";
    preOrder(root->right);
    
}

int main(){

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    Node f(60);
    Node g(70);
    Node h(80);
    Node i(90);
    Node j(100);
    Node k(110);
    Node l(120);

    a.left=&b;
    a.right=&c;
    b.left=&d;
    b.right=&e;
    d.right=&h;
    e.left=&i;
    c.left=&f;
    c.right=&g;
    f.left=&j;
    f.right=&k;
    g.right=&l;

    preOrder(&a);





    return 0;
}