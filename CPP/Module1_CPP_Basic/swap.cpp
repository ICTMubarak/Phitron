#include<bits/stdc++.h>
using namespace std;

void my_swap(int *x,int *y){
    int temp;
    temp =*x;
    *x = *y;
    *y = temp;
}

int main(){

    int x,y;
    cin>>x>>y;  
    my_swap(&x, &y);
    cout <<x<<y<<endl;
    swap(x,y);
    cout <<x<<y;

    return 0;
}