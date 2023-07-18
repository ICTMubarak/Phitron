#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> stk;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk.push(x);
    }
    
    int pop() {
        stack<int> newStk;
        int fnt;
        while(!stk.empty()){
                int val = stk.top();
                stk.pop();
                if(stk.empty()){
                    fnt = val;
                    break;
                }
                newStk.push(val);
            }
            while(!newStk.empty()){
                stk.push(newStk.top());
                newStk.pop();
            }
            return fnt;
    }
    
    int peek() {
       stack<int> newStk;
        int fnt;
        while(!stk.empty()){
                int val = stk.top();
                stk.pop();
                if(stk.empty()){
                    fnt = val;
                   // break;
                }
                newStk.push(val);
            }
            while(!newStk.empty()){
                stk.push(newStk.top());
                newStk.pop();
            }
            
            return fnt;
    }
    
    bool empty() {
        return stk.empty();
    }
};

int main(){
    MyQueue qToStk;

    qToStk.push(10);
    qToStk.push(20);
    qToStk.push(30);

    while(!qToStk.empty()){
        cout<<qToStk.peek()<<endl;
        qToStk.pop();
    }

    return 0; 
}