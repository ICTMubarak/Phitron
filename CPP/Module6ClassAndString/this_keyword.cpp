#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    
    Person(string name, int age){
        this->name=name;
        this->age=age;

        //(*this).name=name;
        //(*this).age=age;
        
    }

};
int main(){


Person rakib("rakib",23);

cout<<rakib.name;
    return 0;
}