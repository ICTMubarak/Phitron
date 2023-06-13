#include<bits/stdc++.h>
using namespace std;
int main(){

    int N,M,X,temp,a=0,b=0;
    vector<int> v1,v2,v3;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        v1.push_back(temp);
    }
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>temp;
        v2.push_back(temp);
    }
    cin>>X;
        for(int j=0;j<N+M;j++){
        if(j<X){
            v3.push_back(v1[a]);
            a++;
        }
        else if((j>=X)&&(j<X+M)){
            v3.push_back(v2[b]);
            b++;
        }
        else{
            v3.push_back(v1[a]);
            a++;
        }
        }

        for(int j=0;j<N+M;j++){
        cout<<v3[j]<<" ";
        }

    return 0;
}