#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int bangla;
    int english;
    Person(string nm, int ag, int bn, int en){
        name=nm;
        age=ag;
        bangla=bn;
        english=en;
    }

    int mark(){
        return bangla+english;
    }

};
int main(){


Person rakib("rakib",23,70,89);

cout<<rakib.mark();
    return 0;
}