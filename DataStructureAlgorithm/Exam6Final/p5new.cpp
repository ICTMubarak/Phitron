#include<bits/stdc++.h>
using namespace std;

struct Data{
    string name;
    int roll;
    int mark;
};

bool customComparator(const Data& obj1, const Data& obj2) {
    return obj1.mark < obj2.mark;
}


 void insertMin(vector<Data> &v, string name,int roll, int mark){
    v.push_back({name,roll,mark});
 }

 void deleteMin(vector<Data> &v){
    v.pop_back();
}



int main(){
    vector<Data> v;
    
    int N;
    cin>>N;
     for(int i=0;i<N;i++){
        string name;
        int roll;
        int mark;
         cin>>name>>roll>>mark;
         insertMin(v,name,roll,mark);
         
      }
      
      

    int Q;
    cin>>Q;
    while(Q--){
        
        int chack;
        cin>>chack;
        switch (chack){
        case 0 :{
                string name;
                int roll;
                int mark;
                cin>>name>>roll>>mark;
                insertMin(v,name,roll,mark);
                sort(v.begin(), v.end(), customComparator);
                Data dt = v.back();
                cout<<dt.name<<" "<<dt.roll<<" "<<dt.mark<<" "<<endl;
                break;
        }

        case 1:{
            if(v.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            
            else{
                sort(v.begin(), v.end(), customComparator);
                Data dt = v.back();
                cout<<dt.name<<" "<<dt.roll<<" "<<dt.mark<<" "<<endl;
            }
            break;
        }

        case 2:{
            if(v.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            else{
                sort(v.begin(), v.end(), customComparator);
                deleteMin(v);
            }
            
            if(v.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            else{
                sort(v.begin(), v.end(), customComparator);
                Data dt = v.back();
                cout<<dt.name<<" "<<dt.roll<<" "<<dt.mark<<" "<<endl;
            }
            break;
        }
           
        default:
            break;
        }
    }
        
    return 0;
}
