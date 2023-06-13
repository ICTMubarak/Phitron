#include<bits/stdc++.h>
using namespace std;
int main(){

   int T,N,temp,chackAss;
   vector<int> v;
   cin>>T;
   while(T){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }

    chackAss=0;
    
    // for(int i=0;i<N;i++){
    //     cout<<v[i]<<" ";
    // }

    for(int i=0;i<N-1;i++){
        if(v[i]>v[i+1]){
            chackAss=1;
            break;
        }
    }

   
    if(chackAss==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    v.clear();
    //cout<<endl;
    T--;
       }

    return 0;
}