#include<bits/stdc++.h>
using namespace std;

int a=0,b=0,area=0;

int main(){

    int Q;
    cin>>Q;
    while(Q--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x = min(arr[i],arr[j]);
                if((j-i)*x>area){

                    int chack = 0;

                    for(int k=i+1;k<j;k++){
                        if(arr[k]>x){
                            chack=1;
                        }
                    }

                    if(chack==0){
                        area=(j-i)*x;
                         a=i;
                         b=j;
                    }
                    
                }
            }
        }

        cout<<a<<" "<<b<<endl;
        a=0;
        b=0;
        area=0;
        

    }
    
    return 0; 
}