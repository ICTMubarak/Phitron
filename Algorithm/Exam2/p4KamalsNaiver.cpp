#include<bits/stdc++.h>
using namespace std;

const int N = 1e2+5;
vector<int> adj[N];
bool visitet[N];
int level[N];
vector<int> ndLvl;

void bfs(int s){
	queue<int> q;
	q.push(s);
	visitet[s]=true;
	level[s]=0;
	int count=0;
	while(!q.empty()){
    	int u = q.front();
    	q.pop();

    	for(int v:adj[u]){
        	if(visitet[v]==true) continue;
        	q.push(v);
        	visitet[v]=true;
        	level[v] = level[u]+1;
			count++;
    	}

	}
	cout<<count;
}

int main(){

	int n,m;
	cin>>n>>m;

	for(int i=0;i<m;i++){
    	int u, v;
    	cin>>u>>v;
    	adj[u].push_back(v);
    	//adj[v].push_back(u);
	}

    int home;
    cin>>home;
   
	bfs(home);
    
	return 0;
}
