#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v={1,2,3,4,6};

    v.insert(v.begin()+2,10);
    vector<int> v1 = {4,5,6,7};
    v.insert(v.begin()+1,v1.begin(),v1.end());
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}