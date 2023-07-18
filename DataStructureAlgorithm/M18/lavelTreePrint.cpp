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



void lavelTreePrint(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
}

int main(){

    // Node* root = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    // Node* d = new Node(50);
    // Node* e = new Node(60);
    // Node* f = new Node(70);
    // Node* g = new Node(80);
    // Node* h = new Node(90);
    // Node* i = new Node(100);
    // Node* j = new Node(110);
    // Node* k = new Node(120);
    
    
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

    lavelTreePrint(&a);

     //lavelTreePrint(&a);

 
   // lavelTreePrint(root);

    return 0;
}