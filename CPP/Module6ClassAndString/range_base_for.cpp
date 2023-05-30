#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "short cut for loop";
    for(int i=0;i<s.size();i++){
        cout<<" "<<s[i];
    }
    for(char c:s){}

    return 0;
}