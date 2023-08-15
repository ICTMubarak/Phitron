#include<bits/stdc++.h>
using namespace std;

void init_code(){

}
const int N=1e5+7;

int nums[N];

void marge(int L, int R, int mid){
    int left_size = mid-L+1;
    int LeftArr[left_size+1];
    int right_size = R - mid;
    int RightArr[right_size +1];

    for(int i=L, j=0; i<=mid;i++,j++){
        LeftArr[j]=nums[i];
    }

    for(int i=mid+1, j=0; i<=R;i++,j++){
        RightArr[j]=nums[i];
    }

    LeftArr[left_size]= INT_MIN;
    RightArr[right_size]= INT_MIN;

    int lp=0, rp=0;
    for(int i=L;i<=R;i++){
        if(LeftArr[lp]>RightArr[rp]){
            nums[i]=LeftArr[lp];
            lp++;
        }
        else{
            nums[i]=RightArr[rp];
            rp++;
        }
    }



}

void margesort(int L, int R){
    if(L==R)
    return;
    int mid = (L+R)/2;
    margesort(L, mid);
    margesort(mid+1, R);
    marge(L,R,mid);
}

int main(){
    init_code();
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    margesort(0, n-1);
    for(int i=0;i<n;i++){
        cout<< nums[i] <<" ";
    }

    return 0; 
}