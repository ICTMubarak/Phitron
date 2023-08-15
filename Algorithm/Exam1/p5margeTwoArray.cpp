#include<bits/stdc++.h>
using namespace std;

int find(int l, int r, int k, int nums[]){
    int mid = (l+r)/2;
    if(((nums[mid]==k)&&(nums[mid-1]==k))||((nums[mid]==k)&&(nums[mid+1]==k)))
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
    int nums1[N];
    for(int i=0;i<N;i++){
        cin>>nums1[i];
    }

    int M;
    cin>>M;
    int nums2[M];
    for(int j=0;j<M;j++){
        cin>>nums2[j];
    }

    int MargeArr[M+N];

    for(int i=0,j=0, k=0; k<M+N; k++){
        if((nums1[i]>nums2[j])&&(i<N)){
            MargeArr[k]=nums1[i];
            i++;
        }
        else if((nums2[j]>nums1[i])&&(j<M)){
            MargeArr[k]=nums2[j];
            j++;
        }
        else if((i<N)&&(j==M)){
            MargeArr[k]=nums1[i];
            i++;
        }
        else if((j<M)&&(i==N)){
            MargeArr[k]=nums2[j];
            j++;
        }
        else{
            MargeArr[k]=nums1[i];
            i++;
            MargeArr[k]=nums2[j];
            j++;

        }

    }

    for(int x=0;x<M+N;x++){
        cout<<MargeArr[x]<<" ";
    }

      return 0; 
}