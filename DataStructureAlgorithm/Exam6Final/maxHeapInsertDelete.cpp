#include<bits/stdc++.h>
using namespace std;


void insertMin(vector<int> &v){

    int x;
    cin>>x;
    v.push_back(x);

    int cur_idx = v.size()-1;
    int parent = (cur_idx-1)/2;

    while(cur_idx!=0){
        if(v[parent]<v[cur_idx]){
            swap(v[parent],v[cur_idx]);
            cur_idx = parent;
            parent = (cur_idx-1)/2;
        } 
        else {
            break;
        }
    }
}

void deleteMin(vector<int> &v){
    v[0]=v[v.size()-1];
    int cur=0;
    v.pop_back();
    while (true){
        int left_idx= cur*2+1;
        int right_idx= cur*2+2;
        int last_idx = v.size()-1;
        if(left_idx <= last_idx && right_idx <= last_idx){
            if(v[left_idx]>=v[right_idx] && v[left_idx] > v[cur]){
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx]>=v[left_idx] && v[right_idx]>v[cur]){
                swap(v[right_idx],v[cur]);   
                cur = right_idx;             
            }
            else{
                break;
            }
        }
        else if(left_idx <= last_idx){
            if(v[left_idx]>v[cur]){
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else{
                break; 
            }
        }
        else if(right_idx <= last_idx){
            if(v[right_idx]>v[cur]){
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
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    

    insertMin(v);

        for(int val: v) cout<<val<<" ";
deleteMin(v);
cout<<endl;
for(int val: v) cout<<val<<" ";

    return 0;
}
