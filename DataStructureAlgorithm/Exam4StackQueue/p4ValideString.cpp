#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
         string str;
         stack<char> stk;
         int conutA=0, countB=0;
         cin>>str;
         for(int i=0;str[i]!=NULL;i++){
         if(str[i]=='A')
         conutA++;
         if(str[i]=='B')
         countB++;
        stk.push(str[i]);
         }
         if(conutA!=countB)
         cout<<"NO"<<endl;
         else{
            cout<<"YES"<<endl;
         }
    }
   
    return 0;
}