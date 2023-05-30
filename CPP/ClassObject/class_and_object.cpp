#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
  char name[100];
  int roll;
  int cls;
  char section;

};



int main(){

  Student rahim;
  rahim.roll=29;
  rahim.cls=9;
  rahim.section='A';
  char nm1[100]="Rahim";
  strcpy(rahim.name,nm1);

  Student karim;
  karim.roll=29;
  karim.cls=9;
  karim.section='A';
  char nm2[100]="Karim";
  strcpy(karim.name,nm2);

  cout<<rahim.name;

  return 0;
}