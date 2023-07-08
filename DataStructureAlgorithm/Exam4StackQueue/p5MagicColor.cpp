#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
    cin>>T;

    while(T--){
        int N;
        cin>>N;
        string str;
        cin>>str;
        stack<char> stk, newStk, finalStk;
        for(int i=N-1;i>-1;i--){
            stk.push(str[i]);
        }
        
        while(!stk.empty()){
            if(newStk.empty()){
                newStk.push(stk.top());
                stk.pop();
                
            }
            else if(stk.top()==newStk.top()){
                stk.pop();
                newStk.pop();
                
            }
            else if((stk.top()=='R'&&newStk.top()=='B')||(stk.top()=='B'&&newStk.top()=='R')){
                stk.pop();newStk.pop();
                newStk.push('P');
                
            }
            else if((stk.top()=='R'&&newStk.top()=='G')||(stk.top()=='G'&&newStk.top()=='R')){
                stk.pop();newStk.pop();
                newStk.push('Y');
                
            }
            else if((stk.top()=='B'&&newStk.top()=='G')||(stk.top()=='G'&&newStk.top()=='B')){
                stk.pop();newStk.pop();
                newStk.push('C');
                
            }
            else{
                newStk.push(stk.top());
                stk.pop();
            }
            
        }

        while(!newStk.empty()){
            if(finalStk.empty()){
                finalStk.push(newStk.top());
                newStk.pop();
            }
            else if(finalStk.top()==newStk.top()){
                int chack = 1;

                  while((!newStk.empty())&&(finalStk.top()==newStk.top())){
                      newStk.pop();
                      chack++;
                  }
                 
                if(chack%2==0){
                    finalStk.pop();
                }
                //newStk.pop();
                
            }
            else{
                finalStk.push(newStk.top());
                newStk.pop();
            }
        }
        while(!finalStk.empty()){
            cout<<finalStk.top();
            finalStk.pop();
        }
cout<<endl;
    }

    return 0;
}