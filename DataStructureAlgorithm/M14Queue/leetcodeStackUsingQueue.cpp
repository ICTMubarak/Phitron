#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> newQ;
        int last;
        while(!q.empty()){
            int val = q.front();
            q.pop();
            if(q.empty()){
                last = val;
                break;
            }
            
            newQ.push(val);
        }
        q = newQ;
        return last;
    }
    
    int top() {
                queue<int> newQ;
        int last;
        while(!q.empty()){
            int val = q.front();
            q.pop();
            if(q.empty()){
                last = val;
                //break;
            }
            
            newQ.push(val);
        }
        q = newQ;
        return last;
    }
    
    bool empty() {
     return q.empty();   
    }
};

int main(){

MyStack QueToStk;
QueToStk.push(10);
QueToStk.push(20);
QueToStk.push(30);

cout<<QueToStk.top()<<endl;
QueToStk.pop();
cout<<QueToStk.top()<<endl;
QueToStk.pop();
cout<<QueToStk.top()<<endl;
QueToStk.pop();
cout<<QueToStk.top()<<endl;

return 0;
}