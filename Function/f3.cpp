// Pass by value
#include<iostream>
 using namespace std;


void printname(string name){
  cout<<name<<endl;
  name[0]='T';
  cout<<name<<endl;

}

int main(){
  string name;
  cout<<"enter name : ";
  cin>>name;
  printname(name);
  cout<<name;
  return 0;
}