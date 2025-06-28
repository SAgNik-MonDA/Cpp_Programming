#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter the character : ";
  cin>>ch;
  int aschii=(int)ch;
  if((aschii>=95 && aschii<=119) ||(aschii>=67 && aschii<=85)){
    cout<<"character is alphabet";
  }
  else{
        cout<<"character is not alphabet";

  }

}