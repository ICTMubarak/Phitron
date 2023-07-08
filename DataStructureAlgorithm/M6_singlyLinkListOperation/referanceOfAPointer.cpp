#include<bits/stdc++.h>
using namespace std;

void fun(int * &p){
    //p = NULL;
    cout<<"value of p= "<<p<<endl;
   cout<<"address of p= "<<&p<<endl;
}

int main(){
    int val=10;
    int *ptr = &val;
    fun(ptr);
    cout<<*ptr<<endl;
    cout<<"ok"<<endl;
    cout<<"value of ptr= "<<ptr<<endl;
    cout<<"address of ptr= "<<&ptr<<endl;


    return 0;
}