#include<bits/stdc++.h>
using namespace std;
int main(){

    int N, T,temp,L,R,Mid;
    cin>>N>>T;
    int A[N];
    for(int i=0;i<N;i++)
    cin>>A[i];

    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }

        }
    }

    
    while(T){

        cin>>temp;
    L=0,R=N-1,Mid=(L+R)/2;
    while(L<=R){
        if(A[Mid]==temp){
            cout<<"found"<<endl;
            break;
        }
        else{
            if(A[Mid]>temp){
                R=Mid-1;
                
            }
            else{
                L=Mid+1;
            }
        }
        Mid=(L+R)/2;
    }

    if(L>R)
    cout<<"Not foudn"<<endl;



        T--;
    }


    for(int i=0;i<N;i++)
    cout<<" "<<A[i];

    return 0;
}