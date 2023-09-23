#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==1){
        cout<<1;
        return 0;
    }

     if(n==2){
        cout<<1<<2<<endl;
        cout<<2<<2;
        return 0;
    }


    for(int j=1;j<=n;j++){
            cout<<j;
        }
cout<<endl;
    for(int i=2;i<n;i++){
        cout<<i;
        for(int p = 2;p<n;p++){
            cout<<" ";
        }
        cout<<n;
        if(i<n-1){
            cout<<endl;
        }
          
    }
cout<<endl;
    for(int m=1;m<=n;m++){
            cout<<n;
        }
    
    return 0; 
}