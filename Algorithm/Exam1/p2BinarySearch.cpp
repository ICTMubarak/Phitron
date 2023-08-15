#include<bits/stdc++.h>
using namespace std;

int find(int l, int r, int k, int nums[]){
    int mid = (l+r)/2;
    if(nums[mid]==k)
    return mid;
    else if(l>r){
        return -1; 
    }
    else{
        if(nums[mid]>k){
            l=l;
            r=mid-1;
            find(l, r, k, nums);
        }
        else{
            l=mid+1;
            r=r;
            find(l, r, k, nums);
        }
    }

    
}

int main(){
    
    int N;
    cin>>N;
    int nums[N];
    for(int i=0;i<N;i++){
        cin>>nums[i];
    }

    int k;
    cin>>k;

    int chack = find(0, N-1, k, nums);
    
    if(chack==-1)
        cout<<"Not Found";
    else
        cout<<chack;

      return 0; 
}