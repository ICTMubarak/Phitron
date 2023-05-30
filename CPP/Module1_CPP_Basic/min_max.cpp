#include<bits/stdc++.h>
using namespace std;

int my_min(int x, int y){
       if(x<y)return x;
        else return y;
    }

int main(){

    int x,y;
    cin>>x>>y;
    cout<<my_min(x,y);
    int k=max(7,5);    
    cout<<k;    
    
    return 0;
}