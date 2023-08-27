#include<bits/stdc++.h>
using namespace std;
int main(){

    int node, edge;
    cin>>node>>edge;
    vector<pair<int, int>> vtr;

    while(edge--){
        int a, b;
        cin>>a>>b;
        vtr.push_back({a,b});
    }

    for(int i=0;i<vtr.size();i++){
            cout<<vtr[i].first<<" "<<vtr[i].second<<endl;
    }
    return 0; 
}