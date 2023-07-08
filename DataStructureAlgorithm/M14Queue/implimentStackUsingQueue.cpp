#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q, newQ;

    int n;
   cin>>n;
   while(n--){
    int x;
    cin>>x;
    q.push(x);
   }

   while(!q.empty()){
    int top;
    int sz = q.size()-1;
    while(sz){
        //cout<<q.front()<<" ";
        newQ.push(q.front());
        q.pop();
        sz--;
    }
  
    cout<<q.front()<<" ";
    q.pop();
    while(!newQ.empty()){
        q.push(newQ.front());
        newQ.pop();
    }
   }
    return 0; 
}