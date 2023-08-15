#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visitet[N];
int level[N];

void bfs(int s){
	queue<int> q;
	q.push(s);
	visitet[s]=true;
	level[s]=0;

	while(!q.empty()){
    	int u = q.front();
    	q.pop();

    	for(int v:adj[u]){
        	if(visitet[v]==true) continue;
        	q.push(v);
        	visitet[v]=true;
        	level[v] = level[u]+1;
    	}

	}
}

int main(){

	int n,m;
	cin>>n>>m;

	for(int i=0;i<m;i++){
    	int u, v;
    	cin>>u>>v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
	}
    int Q, S, D;
    cin>>Q;
    while(Q--){
        cin>>S>>D;
		bfs(S);
		if(!visitet[D])
		cout<<"-1"<<endl;
		else{
        cout<<level[D]<<endl;
		}
       
        for(int i=0;i<N;i++){
            visitet[i]=false;
            level[i]=0;
        }
    }

	return 0;
}
