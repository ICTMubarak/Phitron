#include<bits/stdc++.h>
using namespace std;
const long long int INF = 10e18;
long long int dis[110][110];
void set_arr(){
    for(int i=0;i<110;i++){
        for(int j=0;j<110;j++){
            dis[i][j]=INF;
            if(i==j) dis[i][j]=0;
        }
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    set_arr();
    while(e--){
        long long int a,b,w;
        cin>>a>>b>>w;
        dis[a][b]=min(dis[a][b],w);  
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if((dis[i][k] !=INF && dis[k][j] != INF) && (dis[i][k] + dis[k][j] < dis[i][j])){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }

int Q;
cin>>Q;
//cout<<Q;
while(Q--){
    int i,j;
    cin>>i>>j;
    if(i==j) cout<<0<<endl;
    else if(dis[i][j]==INF) cout<<-1<<endl;
    else cout<<dis[i][j]<<endl;
}
    return 0; 
}