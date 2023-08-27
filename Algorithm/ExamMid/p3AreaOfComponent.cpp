#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1005;
int n,m;
int rm=1;

char a[N][N];

bool visit[N][N];

vector<int> room;

vector<pi> path = {{-1,0},{1,0},{0,-1},{0,1}};

bool isValid(int cI, int cJ){
    if(cI>=0 && cI<n && cJ>=0 && cJ < m && a[cI][cJ]=='.') return true;
    else return false;
}


void dfs(int si, int sj){

    visit[si][sj]=true;
    for(int i=0;i<4;i++){
        pair<int,int> p= path[i];
        int ci = si+p.first;
        int cj = sj+p.second;
        if(isValid(ci,cj) && !visit[ci][cj]){
            
             dfs(ci,cj);
             rm++;
            
        }
        
    }

}


int main(){

    cin>>n>>m;
    


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int cnt = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visit[i][j] && a[i][j]=='.'){
                cnt++;
                dfs(i,j);
                //cout<<rm<<endl;
                room.push_back(rm);
                rm=1;
                
            }
            
        }
    }

    //cout<<cnt;

    if(room.empty()){
        cout<<"-1";
    }
    else{
        sort(room.begin(),room.end());
        for(auto rn:room){
            cout<<rn;
            break;
        }
    }

    return 0; 
}