// Rotate Array

#include <bits/stdc++.h>
using namespace std;
void display(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

  }
  cout<<endl;
}

void reversePart(int i ,int j,vector<int> &v){
  while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
  }
  return ;
}

int main(){
  int k;
  cout<<"Enter how many time you rotate the array : ";
  cin>>k;
  vector<int>v; 
  v.push_back(5);
  v.push_back(12);
  v.push_back(11);
  v.push_back(4);
  v.push_back(6);
  v.push_back(3);
  v.push_back(2);
  int n=v.size();
  if(k>n) k=k%n;
  display(v);
  reversePart(0,n-k-1,v);
  reversePart(n-k,n-1,v);
  reversePart(0,n-1,v);

  display(v);
} 