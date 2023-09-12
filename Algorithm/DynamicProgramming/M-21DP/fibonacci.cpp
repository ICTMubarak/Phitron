#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
         cout<<n<<" ";
    if(n==0||n==1) return 1;
    else
     return fibo(n-1)+fibo(n-2); 

   
     
}

int main(){

    int n;
    cin>>n;

    int x = fibo(n);
    cout<<endl;
    cout<<x;

    return 0;
}