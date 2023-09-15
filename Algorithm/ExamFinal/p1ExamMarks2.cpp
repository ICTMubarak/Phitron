#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

void set_arr(){
    for(int i=0;i<1005;i++){
        for(int j=0;j<1005;j++){
            dp[i][j]=-1;
        }
    }
}

bool subset_sum(int n, int a[], int s){
   
   if(n==0){
    if(s==0) return true;
    else return false;
   }

   if(dp[n][s]!=-1) return dp[n][s];

   if(a[n-1]<=s){
    bool op1 = subset_sum(n,a,s-a[n-1]);
    bool op2 = subset_sum(n-1,a,s);
    return dp[n][s] = op1 || op2;
   }
   else{
    return dp[n][s] = subset_sum(n-1,a,s);
   }

   
}   

int main(){

    int Q;
    cin>>Q;
    while(Q--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
            set_arr();
             if(subset_sum(n,a,1000-m)) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        
    }
    return 0; 
}
