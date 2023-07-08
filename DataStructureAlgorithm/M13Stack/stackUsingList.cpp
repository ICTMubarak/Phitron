#include<bits/stdc++.h>
using namespace std;

class myClass{
    
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back(); 
    }
    bool empty(){
        if(l.size()==0) return true;
        else return false;
    }

};

int main(){

myClass lst;
int n;
cin>>n;
while(n){
    int x;
    cin>>x;
    lst.push(x);
    n--;
}

while(!lst.empty()){
    cout<<lst.top()<<endl;
    lst.pop();

}

    return 0;
}