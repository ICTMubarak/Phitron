#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

const int N = 1e3+5;
const int INF = 1e9+10;
vector<pii> adj[N];
vector<int> dist(N,INF);
vector<bool> visited(N);

void dijkstra(int sourse){
    priority_queue<pii, vector<pii>,greater<pii>> pq;
    dist[sourse]=0;
    pq.push({0,sourse});

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        visited[u]=true;

        for(pii vpair:adj[u]){
            int v = vpair.first;
            int w = vpair.second;

            if(visited[v]) continue;

            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}


int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    dijkstra(1);

    for(int i =1;i<=n;i++){
        cout<<"Distence of Node: "<<i<<" ";
        cout<<dist[i]<<endl;
    }

    return 0;


}