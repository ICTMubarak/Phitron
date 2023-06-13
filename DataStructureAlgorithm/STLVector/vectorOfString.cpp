#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<string> v;
    // int N;
    // cin>>N;
    
    // for(int i=0;i<N;i++){
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }

    // for(int i=0;i<N;i++){
    //     cout<<v[i]<<endl;
    // }

    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0;i<n;i++){
        getline(cin,v[i]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    






    

    return 0;
}