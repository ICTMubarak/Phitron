#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int dis[N];
bool vis[N];
vector<int> v[N];
vector<int> nd;
vector<int> ndCheck;

vector<pair<int, int>> vp;

void bfs(int src){

    queue<int> q;
    q.push(src);
    vis[src]=true;
    dis[src]=0;


    while(!q.empty()){
        int parent = q.front();
        q.pop();
        int ch=0;
        for(int i=0;i<v[parent].size();i++){
            int child = v[parent][i];
            if(vis[child]==false){
                q.push(child);
                dis[child]=dis[parent]+1;
                vis[child]=true;

                if(dis[child]>1){
                    ch=1;
                    break;
                }
                
                if(dis[child]==1){
                    vp.push_back({parent,child});
                    ndCheck.push_back(child);
                }
                

            }
            
            if(ch==1) break;
        }
    }
}

int main(){

    int e;
    cin>>e;
    

    while(e--){

        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        
        auto rslt = find(nd.begin(),nd.end(),a);
        if(rslt==nd.end()){
            nd.push_back(a);
        }

        auto rslt2 = find(nd.begin(),nd.end(),b);
        if(rslt2==nd.end()){
            nd.push_back(b);
        }

    }

    sort(nd.begin(),nd.end());

    for(int n:nd){

        //cout<<n<<" ";
        auto rslt = find(ndCheck.begin(),ndCheck.end(),n);
        if(rslt==ndCheck.end()) {
                //cout<<"n= "<<n<<endl;
               bfs(n);
        //break;

        for(int i=0;i<N;i++){
            dis[i]=0;
             vis[i]=false;
             
        }

        }

    }


    sort(vp.begin(),vp.end());

    for(auto pr:vp){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    return 0;
}