#include<bits/stdc++.h>
using namespace std;

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
            int terget,count;
            auto it = mp.begin();
            terget = it->first;
            count = 1; 
          for(auto it=mp.begin();it!=mp.end();it++){
                if(it->second>count){
                    count = it->second;
                    terget = it->first;
                }
                if(it->second==count){
                    terget = terget>it->first?terget:it->first;
                }    
             
         }
         cout<<terget<<" "<<count<<endl;
         mp.clear();

    }

    return 0;
}