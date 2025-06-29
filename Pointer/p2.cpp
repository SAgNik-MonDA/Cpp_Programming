// Intro Pointer

#include<iostream>
using namespace std;
int main(){
  int x=6;
  int*  m=&x;
  cout<<m<<endl;
  *m=9;
  cout<<*m<<endl;
}