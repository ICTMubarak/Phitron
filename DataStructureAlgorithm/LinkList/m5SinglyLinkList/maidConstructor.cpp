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

int main(){

    Node a(10);
    Node b(20);
    Node c(90);

    a.next=&b;
    b.next=&c;

    cout<<(*(*a.next).next).val<<endl;
    cout<<a.next->next->val<<endl;


    return 0; 
}