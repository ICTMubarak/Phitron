#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
   
   v.push_back(90);
   v.push_back(70);
   v.push_back(50);
   v.push_back(20);
   v.push_back(10);
   cout<<v.capacity()<<endl;
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
   }
   v.clear();
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
   }
   cout<<v[3]<<endl;
   v.resize(2);
   cout<<" "<<v.size()<<endl;
   v.resize(5,9);

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }




    return 0;
}