#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1005;
int n,m;

int cnt=0;

int di,dj;

char a[N][N];

bool visit[N][N];

vector<pi> path = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

bool isValid(int cI, int cJ){
    if(cI>=0 && cI<n && cJ>=0 && cJ < m && a[cI][cJ]=='.') return true;
    else return false;
}


void dfs(int si, int sj){
    visit[si][sj]=true;
    //cout<<"si = "<<si<<" "<<"sj="<<sj<<endl;
    if(si==di && sj ==dj){
        cout<<cnt;
        return;
    }
    else{
        for(int i=0;i<8;i++){
        pair<int,int> p= path[i];
        int ci = si+p.first;
        int cj = sj+p.second;
        //cout<<"ci = "<<ci<<" "<<"cj="<<cj<<endl;
        if(isValid(ci,cj) && !visit[ci][cj]){
            cnt++;
            dfs(ci,cj);
        }   
    }
    }
    //cout<<cnt;
}


int main(){

    cin>>n>>m;
    


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]='.';
        }
    }

    int cnt = 0;

    int si,sj;
    cin>>si>>sj;

    
    cin>>di>>dj;

    dfs(si,sj);

    return 0; 
}