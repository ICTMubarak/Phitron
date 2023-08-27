#include<bits/stdc++.h>
using namespace std;
int main(){

    int node, edge;
    cin>>node>>edge;
    vector<int> vtr[node+1];

    while(edge--){
        int a, b;
        cin>>a>>b;
        vtr[a].push_back(b);
        vtr[b].push_back(a);
    }


    for(int i=0;i<=node;i++){
        cout<<"Index "<<i<<" : ";
        for(auto v:vtr[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }


    return 0; 
}