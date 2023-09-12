#include<bits/stdc++.h>
using namespace std;

int knapSack(int n, int s, int v[], int w[]){

    if(n==0 || s==0) return 0;

   if(w[n-1]<=s){
     int op1 = knapSack(n-1,s-w[n-1],v,w) + v[n-1];
    int op2 = knapSack(n-1,s,v,w);
    return max(op1, op2);
   }
   else{

    return knapSack(n-1,s-w[n-1],v,w);

   }

}


int main(){

    int n;
    cin>>n;

    int value[n+1],weight[n+1];

    for(int i=0;i<n;i++){
        cin>>value[i];
    }

    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    int bostarSize;
    cin>>bostarSize;

    cout<<knapSack(n,bostarSize,value,weight);



    return 0;
}