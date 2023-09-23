#include<bits/stdc++.h>
using namespace std;

int a=0,b=0;

int main(){

    int Q;
    cin>>Q;
    while(Q--){
        int n;
        cin>>n;

        

        int arr[n];
        int max1=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(max1<arr[i]){
                a=i;
                max1=arr[i];
            }
        }

if(n==2){
            cout<<0<<" "<<1<<endl;
            a=0;
            b=0;
            continue;
        }
        

    int max2 = 0;

        for(int i=0;i<n;i++){
            int temp = arr[i];
            if(temp==max1) continue;
            
            if(max2<arr[i]){
                b=i;
                max2=arr[i];
            }
            
        }

        if(a<b){
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<b<<" "<<a<<endl;
        }

        
    a=0;
    b=0;
    }
    
    return 0; 
}