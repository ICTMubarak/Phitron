#include<bits/stdc++.h>
using namespace std;

string str1,str2;

int main(){

    do{ 
        str1.clear();
        str2.clear();
        cin>>str1>>str2;
        //cout<<str1<<" "<<str2<<endl;

        int i=0,j=0;

        while(i!=str1.length()&&j!=str2.length()){
            if(str1[i]==str2[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }

        if(str1.empty()) break;

        if(j==str2.length()){
            cout<<"Possible"<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }

    }while(!str1.empty()||!str2.empty());
    
    return 0; 
}