#include<bits/stdc++.h>
using namespace std;

class myQueue{
    public:
    list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
       l.pop_front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
    l.empty();
   }
    int front(){
        return l.front();
    }
};

int main(){

    myQueue que;
   int n;
   cin>>n;
   while(n--){
    int x;
    cin>>x;
    que.push(x);
   }

   while(!que.empty()){
    cout<<que.front()<<" ";
    que.pop();
   }

    return 0;
}