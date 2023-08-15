#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visitet[N];
int level[N];
vector<int> ndLvl;

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
   
  
	bfs(0);

	int L;
    cin>>L;

	if(L==0){
		cout<<"0";
		return 0;
	}
    
    
    
	int chack = 0;

    for(int i=0;i<N;i++){
        if(level[i]==L){
			ndLvl.push_back(i);
			chack =1;
		}
        
    }
	
	if(chack==0){
		cout<<"-1";
		return 0;
	}

	
	if(chack==1){
		sort(ndLvl.begin(),ndLvl.end());

	for(auto it=ndLvl.begin();it!=ndLvl.end();it++){
		cout<<*it<<" ";
	}
	}

	return 0;
}
