#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
const int N = 1e5+5;
vector<pi> v[N];
bool vis[N];
int arrSize[N];
int parent1[N];

int n,e;


void set_parent(int n){
    for(int i=0;i<=n;i++){
        parent1[i]=-1;
        arrSize[i]=1;
    }
}

int dsu_find(int src){
    
    while(parent1[src]!=-1){
        src=parent1[src];
    }
    return src;
}

void dsu_union(int a, int b){
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if(leaderA!=leaderB){
        if(arrSize[leaderA]>arrSize[leaderB]){
            parent1[leaderB]=leaderA;
            arrSize[leaderA] += arrSize[leaderB];
       }
       else{
        parent1[leaderA]=leaderB;
        arrSize[leaderB] += arrSize[leaderA];
       }
    }
}


class Edge{
    public:
    long long int a,b,w;
    Edge(long long int a, long long int b, long long int w){
        this->a=a;
        this->b=b;
        this->w=w;
    }
};

class cmp{
    public:
    bool operator()(Edge a, Edge b){
        return a.w > b.w;
    }
};

void prims(long long int s){
    priority_queue<Edge, vector<Edge>,cmp> pq;
    vector<Edge> edgeList;
    pq.push(Edge(s,s,0));
    while(!pq.empty()){
        Edge parent = pq.top();
        pq.pop();
        long long int a = parent.a;
        long long int b = parent.b;
        long long int w = parent.w;

        if(vis[b]) continue;
        vis[b] = true;
        edgeList.push_back(parent);
        for(auto i=0;i<v[b].size();i++){
            pi child = v[b][i];

            if(!vis[child.first]){
                pq.push(Edge(b,child.first,child.second));
            }
        }

    }
    edgeList.erase(edgeList.begin());
    long long int minPath=0;
    for(Edge val:edgeList){
       // cout<<val.a<<" "<<val.b<< " "<<val.w<<endl;
        minPath = minPath + val.w;
    }
    cout<<minPath;
}


int main(){

    
    cin>>n>>e;
    if(n<2){
        cout<<"-1";
        return 0;
    }
    set_parent(n);
    int tmp=e-1,src;
    while(e--){
        
        long long int a,b,w;
        cin>>a>>b>>w;
        if(tmp==e){
            src = a;
        }
        dsu_union(a,b);
        v[a].push_back({b,w});
        v[b].push_back({a,w});

    }

int cnt=0;
for(int i=1;i<=n;i++){
    if(parent1[i]==-1)
    cnt++;
}

if(cnt>1){
    cout<<"-1";
}
else{
prims(src);
}
    return 0;
}