#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> strQue;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==0){
            string s;
            cin>>s;
            strQue.push(s);
        }
        if(x==1){
            if(strQue.size()==0)
            cout<<"Invalid";
            else{
                cout<<strQue.front();
                strQue.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}