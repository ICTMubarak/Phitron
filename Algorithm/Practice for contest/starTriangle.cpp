#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      
        for(int j=n-i;j>1;j--){
            cout<<" ";
        }
        for(int k= 1;k<=i*2+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }



    for(int i=1;i<=n;i++){

        for(int k=n;k>n-i;k--){
            cout<<" ";
        }

        for(int j=n*2-i-2;j>=i;j--){
            cout<<"*";
        }
        
        cout<<endl;
    }


    return 0;
}