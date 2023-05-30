#include<bits/stdc++.h>
using namespace std;
int main(){

    string a,b,c,d="D";
    a= "Hello";
    b="world";
    c=a+b;
    cout<<c<<endl;

    c.append(a);
    cout<<c<<endl;

    c+="M";
    c=c+d;
    c.push_back('K');
    cout<<c<<endl;
    c.pop_back();
    cout<<c<<endl;
    //c.erase(5);
    c.erase(3,2);
    cout<<c<<endl;
    c.replace(3,2,"Mubarak");
    cout<<c<<endl;
    c.insert(1,"Hossain");
    cout<<c<<endl;




    return 0;
}