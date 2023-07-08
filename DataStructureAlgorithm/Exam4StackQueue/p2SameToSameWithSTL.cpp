#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stk;
    queue<int> que;
    
    int N, tempN, M, tempM;
    cin>>N>>M;
    tempN = N; tempM = M;
    
    while(N--){
        int x;
        cin>>x;
        stk.push(x);
    }
    while(M--){
        int x;
        cin>>x;
        que.push(x);
    }

    int chack = 0;
    if(tempN!=tempM){
        cout<<"NO";
    }
    else{
        while(tempN--){
            if(stk.top()!=que.front()){
                chack = 1;
                cout<<"NO";
                break;
            }
            stk.pop();
            que.pop();
        }
        if(chack==0){
            cout<<"YES";
        }
    }


    return 0;
}