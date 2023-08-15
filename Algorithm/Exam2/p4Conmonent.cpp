#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visitet[N];
int level[N];
vector<int> nd;
vector<int> ndCount;

int bfs(int s){
    queue<int> q;
    q.push(s);
    visitet[s]=true;
    int count=0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        count++;
        for(int v:adj[u]){
            if(visitet[v]==true) continue;
            q.push(v);
            visitet[v]=true;
        }

    }
    return count;
}

int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        auto rslt = find(nd.begin(),nd.end(),u);
        if(rslt==nd.end()){
            nd.push_back(u);
        }

        auto rslt2 = find(nd.begin(),nd.end(),v);
        if(rslt2==nd.end()){
            nd.push_back(v);
        }
    }

    int cc = 0;
    for(auto i=nd.begin();i!=nd.end();i++){
        if(visitet[*i]) continue;
        int x = bfs(*i);
        if(x>1)
        ndCount.push_back(x);
        cc++;
    }

   // cout<<"NumberOfCC: "<<cc<<endl;

    sort(ndCount.begin(),ndCount.end());


    for(auto it=ndCount.begin();it!=ndCount.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}