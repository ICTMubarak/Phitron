#include<bits/stdc++.h>
using namespace std;
int main(){

    list<string> histryList;
    string str,str2="end";
    cin>>str;
    while(str!=str2){
        histryList.emplace_back(str);
        cin>>str;
    }

    int Q;
    cin>>Q;

    string visit, histry;
    auto ptr = histryList.begin();

    while(Q){
        cin>>visit;
        if(visit=="visit"){
            cin>>histry;
            auto it = find(histryList.begin(),histryList.end(),histry);
            if(it!=histryList.end()){
                ptr=it;
                cout<<*ptr<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }
        }

        else if(visit=="next"){
            ++ptr;
            if(ptr==histryList.end()){
                cout<<"Not Available"<<endl;
                --ptr;
            }
            else{
                cout<<*ptr<<endl;
            }
        }
        else if(visit=="prev"){
            if(ptr==histryList.begin()){
                cout<<"Not Available"<<endl;
            }
            else{
                --ptr;
                cout<<*ptr<<endl;
            }
        }

        Q--;
    }

    // for(auto it = histryList.begin(); it!=histryList.end();it++){
    //     cout<<*it<<" ";
    // }

    return 0;
}