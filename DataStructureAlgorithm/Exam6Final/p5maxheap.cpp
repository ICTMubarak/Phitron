#include<bits/stdc++.h>
using namespace std;


void insertMin(vector<Data> &v, string name,int roll, int mark){

    v.push_back({name,roll,mark});
    // if(v.size()==1)
    // return;

    // int cur_idx = v.size()-1;
    // int parent = (cur_idx-1)/2;

    // while(cur_idx!=0){
    //     if(v[parent].mark > v[cur_idx].mark){
    //         swap(v[parent],v[cur_idx]);
    //         cur_idx = parent;
    //         parent = (cur_idx-1)/2;
    //     } 
    //     else {
    //         break;
    //     }
    // }
}

void deleteMin(vector<Data> &v){
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
            if(v[left_idx].mark<=v[right_idx].mark && v[left_idx].mark < v[cur].mark){
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx].mark<=v[left_idx].mark && v[right_idx].mark<v[cur].mark){
                swap(v[right_idx],v[cur]);   
                cur = right_idx;             
            }
            else{
                break;
            }
        }
        else if(left_idx <= last_idx){
            if(v[left_idx].mark<v[cur].mark){
                swap(v[left_idx],v[cur]);
                cur = left_idx;
            }
            else{
                break; 
            }
        }
        else if(right_idx <= last_idx){
            if(v[right_idx].mark<v[cur].mark){
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


struct Data{
    string name;
    int roll;
    int mark;
};

int main(){
    //vector<Data> v;
    
    int N;
    cin>>N;
    cout<<N;
    // for(int i=0;i<N;i++){
    //     string name;
    //     int roll;
    //     int mark;
    //     cin>>name>>roll>>mark;
    //    //insertMin(v,name,roll,mark);
    //    cout<<name;
    //    //v.push_back({name,roll,mark});
    // }

    // int Q;
    // cin>>Q;
    // while(Q--){
    //     int chack;
    //     cin>>chack;


    //     switch (chack){
    //     case 0 :{
    //             string name;
    //             int roll;
    //             int mark;
    //         insertMin(v,name,roll,mark);
    //         Data dt = v.front();
    //         cout<<dt.name<<" "<<dt.roll<<" "<<dt.mark<<" "<<endl;
    //         break;
    //     }

    //     case 1:{
    //         if(v.empty()){
    //             cout<<"Empty"<<endl;
    //             break;
    //         }
            
    //         else{
    //             Data dt = v.front();
    //             cout<<dt.name<<" "<<dt.roll<<" "<<dt.mark<<" "<<endl;
    //         }
    //         break;
    //     }

    //     case 2:{
    //         if(v.empty()){
    //             cout<<"Empty"<<endl;
    //             break;
    //         }
    //         else{
    //             deleteMin(v);
    //         }
            
    //         if(v.empty()){
    //             cout<<"Empty"<<endl;
    //             break;
    //         }
    //         else{
    //             Data dt = v.front();
    //             cout<<dt.name<<" "<<dt.roll<<" "<<dt.mark<<" "<<endl;
    //         }
    //         break;
    //     }
           
    //     default:
    //         break;
    //     }
    // }
        
    return 0;
}
