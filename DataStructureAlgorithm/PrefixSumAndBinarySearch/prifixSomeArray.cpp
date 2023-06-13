#include<bits/stdc++.h>
using namespace std;
int main(){

    int N, T,prev=0,a,b;
    cin>>N>>T;
    int A[N],B[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        B[i]=A[i]+prev;
        prev=B[i];
        cout<<" "<<prev;
    }
    cout<<endl;

    while (T){

        cin>>a>>b;
        //cout<<"a=" <<a<<"b= "<<b<<" ";
        if(a==1)
        cout<<B[b-1]<<endl;
        else{
            int x =(B[b-1]-B[a-2]);
           // cout<<"bb= "<<B[b-1]<<" "<<B[y-1];
            cout<<x<<endl;
        }
      

        T--;
    }
   
    

    return 0;
}