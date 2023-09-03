#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int arr[N],arrSize[N];
int n,e,countCycle=0;
void set_arr(int n){
    for(int i=0;i<=n;i++){
    arr[i]=-1;
    arrSize[i]=1;
}
}

int dsu_find(int src){
    
    while(arr[src]!=-1){
        src=arr[src];
    }
    return src;
}

void dsu_union(int a, int b){
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if(leaderA!=leaderB){
       
       if(arrSize[leaderA]>arrSize[leaderB]){
            arr[leaderB]=leaderA;
            arrSize[leaderA] += arrSize[leaderB];
       }
       else{
        arr[leaderA]=leaderB;
        arrSize[leaderB] += arrSize[leaderA];
       }
    }
    else{
        countCycle++;
    }

}

int main(){
    
    
    cin>>n>>e;
    set_arr(n);
     while(e--){
        int a, b;
        cin>>a>>b;
        //cout<<a<<" "<<b;
        dsu_union(a,b);
    }
    cout<<countCycle;

    return 0;
}