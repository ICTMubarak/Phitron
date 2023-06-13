#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    vector<int> dup;
    int N,temp,mx=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
        mx++;
    }
    int chack=0;
    for(int i=0;i<mx;i++){
        int chackIn=0;
        for(int j=0;j<mx;j++){
           // cout<<"j= "<<j;
            if(v[i]==v[j]){
                chack++;
                //cout<<" vi= "<<v[i]<<" vj= "<<v[j]<<endl;
            }
            
            if(chack>1){
                cout<<"YES";
                chackIn=1;
                break;
            }
        }
        if(chackIn==1){
            break;
        }
        chack=0;
    }
    if(chack==0)
    cout<<"NO";

    return 0;
}