#include<bits/stdc++.h>
using namespace std;
void init_code(){

}
const int N=1e3+5;
vector<pair<int,int>> adjlist[N];

int main(){
    init_code();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        adjlist[u].push_back({v, w});
        adjlist[v].push_back({u,w});
    }

    for(int i=1;i<=n;i++){
        cout<<"List "<< i <<" : ";
    for(auto j:adjlist[i]){
 cout<<"("<<j.first <<" , "<<j.second<<")";
    }
       cout<<endl;
            }

    return 0;
}