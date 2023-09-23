#include<bits/stdc++.h>
using namespace std;
string str;

vector<int> v;

int main(){

    int Q;
    cin>>Q;
    while (Q--){
       cin>>str;
       int count = 0,max=0;

       v.push_back(0);

        for(int i=0;i<str.length();i++){
            if(str[i]=='1'){
                count++;
            }
            
            if((str[i+1]=='0'||str[i+1]==NULL)&&(count!=0)){
                v.push_back(count);
                count = 0;
            }

            if(str[i]=='0'){
                count=0;
            }
        }

        sort(v.begin(),v.end());

       

        stack<int> st;
        for(auto x:v){
           st.push(x);
           //cout<<x<<" ";
        }

        //cout<<endl;

        

        int sum=0;
        while(!st.empty()){
           sum=sum+st.top();
           //cout<<st.top()<<" ";
           st.pop();
          if(!st.empty()) st.pop();
        }

         cout<<sum<<endl;
        
    v.clear();

    }
    
    return 0; 
}