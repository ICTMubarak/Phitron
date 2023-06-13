#include<bits/stdc++.h>
using namespace std;
int main(){

    //For Replace
    vector<int> v={4,2,6,3,2,7,2,};
    replace(v.begin(),v.end(),2,100);
    replace(v.begin(),v.end()-1,2,100);
    for(int x:v){
        cout<<x<<" ";
    }

    cout<<endl;
    vector<int> vf={4,2,6,3,2,7,2,};
    // vector<int>::iterator it;
    // it=find(vf.begin(),vf.end(),30);
    auto it = find(vf.begin(),vf.end(),3);
    cout<<*it;

    if(it==vf.end()){
        cout<<"Not found";
    }
    else
    cout<<"Found";

    return 0;
}