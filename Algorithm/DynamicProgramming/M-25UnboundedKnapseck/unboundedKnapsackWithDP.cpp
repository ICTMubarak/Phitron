#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int unbounted_knapsack(int n, int s, int val[], int w[]){

    if(n==0 || s==0) return 0;

    if(dp[n][s]!=-1) return dp[n][s];

   if(w[n-1]<=s){
     int ch1 = val[n-1]+unbounted_knapsack(n,s-w[n-1],val,w);
    int ch2 = unbounted_knapsack(n-1,s,val,w);
    cout<<" ch1= "<<ch1<<" ch2= "<<ch2<<" n,s= "<<n<<s<<endl;
    return dp[n][s] = max(ch1,ch2);
   }
   else{
        //cout<<"EL = "<<" n,s= "<<n<<s<<endl;
        return dp[n][s] = unbounted_knapsack(n-1,s,val,w);
   }
}

int main(){

   int n, s;
   cin>>n>>s;
   int val[n],w[n];
   for(int i=0;i<n;i++){
    cin>>val[i];
   }
   for(int i=0;i<n;i++){
    cin>>w[i];
   }

for(int i=0;i<=n;i++){
    for(int j=0;j<=s;j++){
        dp[i][j]=-1;
    }
}

   cout<<unbounted_knapsack(n,s,val,w);
cout<<endl;
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;

    

}