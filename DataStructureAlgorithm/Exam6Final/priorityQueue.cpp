#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};

class cmp{
    public:
    bool operator()(Student a, Student b){
        if(a.marks < b.marks){
            return true;
        }
        else if(a.marks > b.marks){
            return false;
        }
        else{
            if(a.roll>b.roll) return true;
            else return false;
        }
    }
};

int main(){

    int N;
    cin>>N;
    priority_queue<Student, vector<Student>,cmp> pq;
    for(int i=0;i<N;i++){
        string name;
        int roll;
        int marks;

        cin>>name>>roll>>marks;

        Student obj(name, roll,marks);
        pq.push(obj);
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
                int marks;
                cin>>name>>roll>>marks;
                Student obj(name, roll,marks);
                pq.push(obj);
                Student dt = pq.top();
                cout<<dt.name<<" "<<dt.roll<<" "<<dt.marks<<" "<<endl;
                break;
        }

        case 1:{
            if(pq.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            
            else{
                Student dt = pq.top();
                cout<<dt.name<<" "<<dt.roll<<" "<<dt.marks<<" "<<endl;
                break;
            }
            break;
        }

        case 2:{
            if(pq.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            else{
                pq.pop();
            }
            
            if(pq.empty()){
                cout<<"Empty"<<endl;
                break;
            }
            else{
                Student dt = pq.top();
                cout<<dt.name<<" "<<dt.roll<<" "<<dt.marks<<" "<<endl;
                break;
            }
            break;
        }
           
        default:
            break;
        }
    }


    return 0;
}
