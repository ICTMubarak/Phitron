#include<bits/stdc++.h>
using namespace std;

bool DescSort(int a, int b) {
    return a > b;
}

int count = 0;
int main(){
    map<int, int> mp;
    
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        for(int i=0;i<N;i++){
            long long val;
            cin>>val;
            mp[val]++;
        }
     vector<int> v;
          for(auto it=mp.begin();it!=mp.end();it++){
               v.push_back(it->first);             
         }
         sort(v.begin(),v.end(), DescSort);
         for(int value:v){
            cout<<value<<" ";
         }
         cout<<endl;
         mp.clear();
         v.clear();

    }

    return 0;
}