#include<bits/stdc++.h>
using namespace std;

const long long int N = 1e5+5;
vector<pair<long long, long long>> v[N];
long long int dis[N];
//bool vis[N];

void dijkstra(long long int src){
    priority_queue<pair<long long int, long long int>, vector<pair<long long int,long long int>>,greater<pair<long long int,long long int>>> q;
    q.push({0,src});
    dis[src]=0;

    while(!q.empty()){

        pair<long long int, long long int> parent = q.top();
        q.pop();
        long long int parentNode = parent.second;
        //if(vis[parentNode]==true) continue;
       // vis[parentNode]=true;
        long long int parentCost = parent.first;
        for(auto child:v[parentNode]){
            //pair<long long int,long long int> child = v[parentNode][i];
            long long int childNode = child.first;
            long long int childCost = child.second;
            
            if(parentCost+childCost<dis[childNode]){
                dis[childNode]=parentCost+childCost;
                q.push({dis[childNode],childNode});
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
        v[b].push_back({a,w});
    }

    for(int i=0;i<=n;i++){
        dis[i] = INT_MAX;
    }

    long long int s;
    cin>>s;    

    dijkstra(s);

    long long int Q;
    cin>>Q;

    while(Q--){
        long long int D, DW;
        cin>>D>>DW;
        if(DW>=dis[D])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    for(int i=0;i<N;i++)
    cout<<dis[i]<<" ";


    return 0;
}