#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> listOne;
    list<int> listTwo;

    int x;
    cin>>x;
    while(x!=-1){
        listOne.emplace_back(x);
        cin>>x;
    }
    

    for(auto it = listOne.begin();it!=listOne.end();it++){
        int val=*it;
        auto it2 = find(listTwo.begin(),listTwo.end(),val);
        if(it2!=listTwo.end()){

        }
        else{
            listTwo.emplace_back(val);
        }
    }
    listTwo.sort();
    for(auto it = listTwo.begin(); it!=listTwo.end();it++){
        cout<<*it<<" ";
    }


    return 0;
}