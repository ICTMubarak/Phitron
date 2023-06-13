#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> x={3,5,6};
    vector<int> y={2,3,4};

    y=x;

    y.pop_back();

    for(int i=0;i<y.size();i++)
    cout<<y[i]<<" ";

    return 0;
}