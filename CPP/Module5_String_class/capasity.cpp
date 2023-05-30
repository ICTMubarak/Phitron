#include<bits/stdc++.h>
using namespace std;
int main(){

    char a[10]="Hello";
    
    cout<<strlen(a)<<endl;

    string s1="Helo";
    cout<<s1.size()<<endl;
    cout<<s1.max_size()<<endl;
    cout<<s1.capacity()<<endl;
    //s1.clear();
    cout<<s1.size()<<endl;
    cout<<s1.empty()<<endl;
    string s;
   
    cin>>s;
     s.resize(20);
    cout<<s;

    
    return 0;
}