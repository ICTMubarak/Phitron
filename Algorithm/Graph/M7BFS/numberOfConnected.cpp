#include<bits/stdc++.h>
using namespace std;
void init_code(){

}
const int N = 1e3+5;
vector<int> adj[N];
bool visitet[N];
int level[N];


void dfs(int u){
    visitet[u]=true;
    for(int v:adj[u]){
        if(visitet[v]) continue;
        dfs(v);
    }
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

    int cc = 0;
    for(int i=1; i<=n;i++){
        if(visitet[i]) continue;
        bfs(i);
        cc++;
    }

    cout<<"NumberOfCC: "<<cc;

    return 0;
}
