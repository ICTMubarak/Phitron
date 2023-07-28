#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        
        string sentence;
        string targetWord;
        int count=0;
        getline(cin,sentence);
        //cout<<sentence<<endl;
        string word;
        stringstream ss(sentence); 
        map<string, int> mp;
        while(ss>>word){
            mp[word]++;
            if(mp[word]>count){
                targetWord=word;
                count = mp[word];
            }
        }
        cout<<targetWord<<" "<<count<<endl;

    //    for(auto it=mp.begin();it!=mp.end();it++){
    //             cout<<it->first<<" "<<it->second<<endl;
    //     }

      
    }
    
    return 0; 
}