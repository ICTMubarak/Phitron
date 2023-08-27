#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
vector<int> v[N];
vector<pair<int,int>> vtp;

void dfs(int src){
    //cout<<src<<" ";
    vis[src]=true;

    for(int i=0;i<v[src].size();i++){
        int child = v[src][i];
        if(vis[child]==true) continue;
        vtp.push_back({src,child});
        dfs(child);
    }
}

int main(){

    int n,e;
    cin>>n>>e;

    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }

    dfs(1);

    for(auto p:vtp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}