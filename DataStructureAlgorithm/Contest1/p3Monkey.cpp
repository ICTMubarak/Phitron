#include<bits/stdc++.h>
using namespace std;

int main(){


   
    do{
         string str;
    getline(cin,str);
     for(int i = 1; str[i]!=NULL;i++){
        for(int j=0;j<str.length()-i;j++){
            char ch;
            if(str[j]>str[j+1]){
                ch = str[j];
                str[j]=str[j+1];
                str[j]=ch;
            }
        }
    }while(EOF);

   
    return 0; 
}