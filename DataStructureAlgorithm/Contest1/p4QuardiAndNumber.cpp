#include <bits/stdc++.h>

using namespace std;
vector<int> v;



int main()
{
    
    int Q;
    cin>>Q;
    while(Q--){
        int i,count=0;
        cin>>i;
        while(i--){
         int x;
            cin>>x;
            if(v.end()==find(v.begin(),v.end(),x)){
                v.push_back(x);
            }
            else{
                count++;
            }
            
        }
        cout<<count<<endl;
        v.clear();
    }

    return 0;
}
