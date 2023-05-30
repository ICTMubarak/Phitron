#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
  char name[100];
  int roll;
  int cls;
  char section;

  Student(int r,int s, int c, char* n){
    roll = r;
    section = s;
    cls=c;
    strcpy(name,n);
  }

};

Student f(){
    Student AbRohman(40,'B',7,"AbdurRohim  Ullah");
    return AbRohman;
}

int main(){

  Student rahim(29,'A',7,"Rohim  Ullah");
    
  Student st1 = f();  
  
  cout<<st1.name;
  return 0;
}