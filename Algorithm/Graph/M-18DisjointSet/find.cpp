#include<bits/stdc++.h>
using namespace std;

int a[8]={-1,-1,1,1,6,4,-1,-1};

int find(int src){
    
    while(a[src]!=-1){
        src=a[src];
    }
    return src;
}

int main(){


    int leader = find(7);

    cout<<leader;

    return 0; 
}