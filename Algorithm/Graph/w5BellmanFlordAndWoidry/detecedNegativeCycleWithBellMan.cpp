#include<bits/stdc++.h>
using namespace std;
const long long int INf = 1e18+2;


class Edge{
    public:
    long long int u,v,w;
    Edge(long long int u, long long int v, long long int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }

};

int main(){


   int n,e;
   cin>>n>>e;
   vector<Edge> v;
   while(e--){

    long long int a,b,w;
    cin>>a>>b>>w;

    Edge ed(a,b,w);
    v.push_back(ed);
   }

   long long int dis[n+1];

    for(int i =1;i<=n;i++){
        dis[i]=INf;
    }

    long long int src;
    cin>>src;
    //cout<<src;
    dis[src]=0;

    for(int i=1;i<=n-1;i++){
        for(auto ed:v){
            //Edge ed = v[j];
            long long int a=ed.u;
            long long int b=ed.v;
            long long int w=ed.w;
           // cout<<"a ="<<a<<" b = "<<b<<" w = "<<w<<" ";
            if((dis[a]+w)<dis[b]){
                dis[b]=dis[a]+w;
                //cout<<"dis b = "<<dis[b];
            }
            //cout<<endl;
    }
    //cout<<endl;
    //cout<<"for end"<<endl;
}

//for Detected Negative Cycle
bool cycle = false;

        for(auto ed:v){
            //Edge ed = v[j];
            long long int a=ed.u;
            long long int b=ed.v;
            long long int w=ed.w;
            if((dis[a]+w)<dis[b]){
                cycle = true;
                break;
                //dis[b]=dis[a]+w;
                
            }
    }


int Q;
cin>>Q;

if(cycle){
    cout<<"Negative Cycle Detected";
    return 0;
}
else{
    while(Q--){
        long long int d;
        cin>>d;
        //if(dis[d]>sum||dis[d]<-sum)
        if((dis[d]>INf-1000)||(dis[d]<-INf+1000))
        cout<<"Not Possible"<<endl;
        else
            cout<<dis[d]<<endl;
    }
}

    return 0; 
}