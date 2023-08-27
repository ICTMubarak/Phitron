#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> v[N];
long long int dis[N];

void dijkstra(int src){
    queue<int> q;
    q.push(src);
    dis[src]=0;

    while(!q.empty()){

        int parent = q.front();
        q.pop();
        for(auto child:v[parent]){
            int childNode = child.first;
            int childCost = child.second;
            
            if((dis[parent]+childCost)<dis[childNode]){
                dis[childNode]=dis[parent]+childCost;
                q.push(childNode);
            }
        }

    }
}

int main(){

    long long n,e;
    cin>>n>>e;

    while(e--){
        long long int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
       // v[b].push_back({a,w});
    }

    for(int i=0;i<=n;i++){
        dis[i] = INT_MAX;
    }

    long long int s;
    cin>>s;    

    dijkstra(s);
    //cout<<s;
    long long int Q;
    cin>>Q;

    while(Q--){
        long long int D, DW;
        cin>>D>>DW;
        if(dis[D]<=DW)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    // for(auto n:dis)
    // cout<<n<<" ";

    return 0;
}