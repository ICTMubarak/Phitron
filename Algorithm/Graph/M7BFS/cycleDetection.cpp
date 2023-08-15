#include<bits/stdc++.h>
using namespace std;
void init_code(){

}
const int N = 1e3+5;
vector<int> adj[N];
bool visitet[N];
int level[N];


bool dfs(int u, int p=-1){
    bool cycleExist = false;
    visitet[u]=true;
    for(int v:adj[u]){
        if(v == p) continue;
        if(visitet[v]) return true;
        cycleExist = cycleExist || dfs(v, u);
    }
    return cycleExist;
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    visitet[s]=true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v:adj[u]){
            if(visitet[v]==true) continue;
            q.push(v);
            visitet[v]=true;
        }

    }
}

int main(){

    init_code();

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // if(dfs(1)){
    //     cout<<"Cycle Detected";
    // }
    // else
    // cout<<"No cycle";

    bool isCycle = false;
    for(int i = 1; i<=n;i++){
        if(visitet[i]) continue;
        isCycle |=dfs(i);
    }

    if(isCycle){
        cout<<"Cycle Detected";
    }
    else
    cout<<"No cycle";
   
    return 0;
}
