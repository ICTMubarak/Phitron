#include<bits/stdc++.h>
using namespace std;

bool fn(int n){
    //cout<<"N== "<<n<<" ";
    if(n==1) return true;
    if(n<1) return false;
    if(n%2==0){
        //n=n/2;
        //cout<<"n2="<<n<<endl;
        return fn(n/2);
    }
    else {
       // n=n-3;
        //cout<<"n3="<<n<<endl;
        return fn(n-3);
    }

}
int main(){

    int Q;
    cin>>Q;

    while(Q--){
        int n;
        cin>>n;
        bool result = fn(n);
        if(result) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0; 
}