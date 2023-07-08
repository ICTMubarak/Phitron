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

void insertIntoLL(Node * &head, Node * &tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

int chackDup(Node *head2, int x){
    while(head2!=NULL){
        if(head2->val==x){
            return 1;
        }
        head2=head2->next;
    }
    return 0;
}

void removeDoblicat(Node *head, Node * &head2, Node * &tail2){
        Node *temp = head;
        while (temp!=NULL){
            int chack = chackDup(head2,temp->val);
            if(chack==0)
           insertIntoLL(head2, tail2, temp->val);
           temp=temp->next;
        }
        
        
}

void printLL(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}


void sortLL(Node *head) {
    if (head == NULL || head->next == NULL)
        return;

    bool swapped;
    Node *current;
    Node *lastSorted = NULL;

    do {
        swapped = false;
        current = head;

        while (current->next != lastSorted) {
            if (current->val > current->next->val) {
                int temp = current->val;
                current->val = current->next->val;
                current->next->val = temp;
                swapped = true;
            }
            current = current->next;
        }
        lastSorted = current;
    } while (swapped);
}


int main(){
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    cin>>val;
    while(val!=-1){
        insertIntoLL(head, tail, val);
        cin>>val;
    }

    removeDoblicat(head, head2, tail2);
    // printLL(head);
    // cout<<endl;
    
    sortLL(head2);
    printLL(head2);
   
    return 0;
}