#include<bits/stdc++.h>
#define pair<int,int> pii;
using namespace std;


const int N = 1005;
int visited[N][N];
int level[N][N];
 int n,m;

 vector<pii> direc = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

bool isValid(int i, int j){
    return (i>=0 && i<n && j>=0 && j<m);
}

void bfs(int si, int sj){
    queue<pii> q;
    q.push({si,sj});
   // cout<<si<<" "<<sj<<endl;
    visited[si][sj]=true;
    level[si][sj]=0;

    while(!q.empty()){
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
       // cout<<i<<" "<<j<<endl;
        for(auto d:direc){
            int ni = i + d.first;
            int nj = j + d.second;

            if(isValid(ni,nj) && !visited[ni][nj]){
                q.push({ni,nj});
                visited[ni][nj]=true;
                level[ni][nj]=level[i][j]+1;
                //cout<<level[ni][nj]<<" ";
            }
        }
    }
}


// void reset_level_visit(){
//      for(int i=0;i<N;i++){
//         for(int j=0;j<N;j++){
//             level[i][j]=0;
//             visited[i][j]=false;
//         }
//     }
// }

int main(){

    cout<<"ok";
    cin>>n>>m;
    int si,sj;
    cin>>si>>sj;
    int di,dj;
    cin>>di>>dj;

    cout<<si<<sj<<di<<dj;

    bfs(si,sj);
    cout<<level[di][dj];

    //reset_level_visit();
   


    return 0; 
}