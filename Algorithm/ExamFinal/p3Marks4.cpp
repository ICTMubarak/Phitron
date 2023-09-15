#include<bits/stdc++.h>
using namespace std;
const int C = 1e9+7;
int main(){

    int Q;
    cin>>Q;
    while(Q--){
        
    long long int n,s;
    cin>>n>>s;
    s=1000-s;
    long long int w[n];

    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    
    long long int dp[n+1][s+1];
    dp[0][0]=1;

    for(int i=1;i<=s;i++) dp[0][i]=0;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
           if(w[i-1]<=j){
             dp[i][j]=(dp[i][j-w[i-1]] + dp[i-1][j])%C;
           }
           else{
            dp[i][j] = dp[i-1][j];
           }
        }
    }

    if(dp[n][s]) cout<<dp[n][s]<<endl;
    else cout<<0<<endl;
    }
    return 0; 
}