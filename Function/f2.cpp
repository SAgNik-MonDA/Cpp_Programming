// pass by reference
 #include<iostream>
 using namespace std;
void sum(int &num1){
  num1+=5;
  cout<<num1<<endl;
}
int main(){
  int num1;
  cout<<"enter number : ";
  cin>>num1;
 sum(num1);
  cout<<num1<<endl;
  return 0;
}