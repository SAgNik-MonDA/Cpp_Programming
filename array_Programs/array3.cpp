// Reverse Array 

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
  vector<int>v; 
  v.push_back(48);
  v.push_back(54);
  v.push_back(7);
  v.push_back(8);
  v.push_back(12);
  v.push_back(31);
  v.push_back(45);
  display(v);
  reversePart(0,4,v);
  display(v);
} 