#include<bits/stdc++.h>
using namespace std;
int main(){

    int edge;
    cin>>edge;
    priority_queue<pair<int, int>> pq;
    stack<pair<int, int>> stk;


    while(edge--){
        int a, b;
        cin>>a>>b;
        pq.push({a,b});
    }

   while(!pq.empty()){
    auto ed = pq.top();
    //cout<<ed.first<<" "<<ed.second<<endl;
    stk.push(ed);
    pq.pop();
   }

   while(!stk.empty()){
    auto ed = stk.top();
    cout<<ed.first<<" "<<ed.second<<endl;
    stk.pop();
   }
    return 0; 
}