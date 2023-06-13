#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> v;
    vector<long long> v2;
    int N;
    long long temp, sum = 0 ;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>temp;
        v.push_back(temp);
    }

    for(int i=0;i<N;i++){
        sum=sum+v[i];
        v2.push_back(sum);
        //cout<<sum<<" ";
    }

    for(int i=N-1;i>-1;i--){
        cout<<v2[i]<<" ";
    }


 

    return 0;
}