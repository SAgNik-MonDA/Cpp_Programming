// if else
#include<iostream>
int main(){
using namespace std;
 int marks;
 cout<<"Enter marks : ";
 cin>>marks;
 if(marks<25){
  cout<<"F";
 }
  else if(marks<=44){
  cout<<"E";
  }
  else if(marks<=55){
    cout<<"D";
  }
  else if(marks<=66){
    cout<<"C";
  }
  else if(marks<=77){
    cout<<"B";
    }
    else if(marks<=88){
      cout<<"A";
    }
    else if(marks<=100){
      cout<<"O";
    }
  
 
  return 0;
}