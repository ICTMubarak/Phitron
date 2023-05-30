#include<bits/stdc++.h>
using namespace std;
int main(){


    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    cout<<s[i]<<endl;

    cout<<*s.begin();
    cout<<*s.end();
    cout<<*(s.end()-1);

    string:: iterator it;
    for(it=s.begin();it<s.end();it++)
    cout<<*it;

    for(string:: iterator it1=s.begin();it1<s.end();it1++)
    cout<<*it1<<endl;

    for(auto it1=s.begin();it1<s.end();it1++)
    cout<<*it1;
    
    return 0;
}