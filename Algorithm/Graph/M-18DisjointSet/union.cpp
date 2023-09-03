#include<bits/stdc++.h>
using namespace std;

//int a[8]={-1,-1,1,1,6,4,-1,-1};

int parent[1000];

void set_parent(int n){
    for(int i=0;i<=n;i++){
        parent[i]=-1;
    }
}

int dsu_find(int src){
    
    while(parent[src]!=-1){
        src=parent[src];
    }
    return src;
}

void dsu_union(int a, int b){
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if(leaderA!=leaderB){
        parent[leaderB]=leaderA;
    }
}   

int main(){

    int n,e;
    cin>>n>>e;
    set_parent(n);
    while(e--){
        int a, b;
        cin>>a>>b;
        dsu_union(a,b);
    }

    for(int i=0;i<=n;i++){
        cout<<i<<"  "<<" ";
    }
    
    cout<<endl;

    for(int i=0;i<=n;i++){
        cout<<parent[i]<<"  "<< " ";
    }
    return 0; 
}