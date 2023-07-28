#include<bits/stdc++.h>
using namespace std;


void insertMin(vector<long long> &v, long long x){

    v.push_back(x);
    if(v.size()==1)
    return;

    int cur_idx = v.size()-1;
    int parent = (cur_idx-1)/2;

    while(cur_idx!=0){
        if(v[parent]>v[cur_idx]){
            swap(v[parent],v[cur_idx]);
            cur_idx = parent;
            parent = (cur_idx-1)/2;
        } 
        else {
            break;
        }
    }
}

void deleteMin(vector<long long> &v){
    if(v.size()==1){
       // cout<<"s= "<<v.size();
        v.pop_back();
        //cout<<"s ="<<v.size();
        return;
    }

    v[0]=v[v.size()-1];
    int cur=0;
    v.pop_back();
    
    while (true){
        int left_idx= cur*2+1;
        int right_idx= cur*2+2;
        int last_idx = v.size()-1;
        if(left_idx <= last_idx && right_idx <= last_idx){
            if(v[left_idx]<=v[right_idx] && v[left_idx] < v[cur]){
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx]<=v[left_idx] && v[right_idx]<v[cur]){
                swap(v[right_idx],v[cur]);   
                cur = right_idx;             
            }
            else{
                break;
            }
        }
        else if(left_idx <= last_idx){
            if(v[left_idx]<v[cur]){
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else{
                break; 
            }
        }
        else if(right_idx <= last_idx){
            if(v[right_idx]<v[cur]){
                swap(v[right_idx],v[cur]);
                cur = right_idx;
            }
            else{
                break; 
            }
        }
        else{
            break;
        }
    }
}

int main(){
    vector<long long> v;
    
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        long long x;
        cin>>x;
       insertMin(v,x);
    }
    int Q;
    cin>>Q;
    while(Q--){
        int chack;
        cin>>chack;


        switch (chack){
        case 0 :{
             long long val;
             cin>>val;
            insertMin(v,val);
            cout<<v.front()<<endl;
            break;
        }

        case 1:{
            if(v.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            
            else{
                cout<<v.front()<<endl;
            }
            break;
        }

        case 2:{
            if(v.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            else{
                deleteMin(v);
            }
            
            if(v.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            else{
                cout<<v.front()<<endl;
            }
            break;
        }
           
        default:
            break;
        }
    }
        
    return 0;
}
