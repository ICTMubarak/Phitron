#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> myList1;
    list<int> myList2(5);
    list<int> myList3(5,10);

    list<int> myList4 = {5, 6, 8, 9, 7, 3};

    list<int> myList5(myList4);
    
    int A[5]={9, 8, 7, 4, 2};
    list<int> myList6(A,A+5);

    vector<int> V = {100, 200, 300};

    list<int> myList7(V.begin(),V.end());

    for(auto it=myList7.begin();it!=myList7.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
    for(int v:myList6){
        cout<<v<<" ";
    }

    cout<<endl;
    cout<<myList6.max_size()<<endl;
    cout<<myList7.max_size()<<endl;

    myList6.resize(2);
    myList6.resize(5,2);
    myList6.push_back(50);
    myList6.push_front(70);

    myList6.insert(next(myList6.begin(),16),99);
    myList6.insert(next(myList6.begin(),3),{7, 6, 2, 10, 33});
    list<int> newList = {95, 88, 77, 66, 55};
    myList6.insert(next(myList6.begin(),3),newList.begin(), newList.end());
    myList6.erase(next(myList6.begin(),3));
    myList6.erase(next(myList6.begin(),3),next (myList6.begin(),8));
    replace(myList6.begin(),myList6.end(),2,25);
  auto it =   find(myList6.begin(),myList6.end(),20);
  cout<<endl<<*it<<endl;

    for(int v:myList6){
        cout<<v<<" ";
    }

    

    //cout<<myList3.size();

    return 0; 
}