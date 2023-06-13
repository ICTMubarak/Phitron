#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v={3,4,5,1,5,6,1};
    cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;

    cout<<v[0]<<endl;
    cout<<v.front()<<endl;

    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
    }

    int n=4;
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }

    return 0;
}