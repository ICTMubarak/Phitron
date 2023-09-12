#include<bits/stdc++.h>
using namespace std;




int main(){

    int n;
    cin>>n;
    
    int value[n+1],weight[n+1];

    for(int i=0;i<n;i++){
        cin>>value[i];
    }

    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    int s;
    cin>>s;

    int dp[n+1][s+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(i==0||j==0)
            dp[i][j]=0;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                if(weight[i-1]<=j){
                int op1 = dp[i-1][j-weight[i-1]] + value[i-1];
                int op2 = dp[i-1][j];
                 dp[i][j] = max(op1, op2);
         }
        else{

           dp[i][j]=dp[i-1][j];

            }
         }
       }
    }


    for(int i=0; i<=n;i++){
        for(int j=0;j<=s;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}