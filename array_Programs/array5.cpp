// Sorting
#include <bits/stdc++.h>
using namespace std;
void sort01(vector<int>&v){
  int n=v.size();
  int no0=0;
  int no1=0;
  for(int i=0;i<n;i++){
    if(v[i]==0) no0++;
    else no1++;
  }
  for(int i=0;i<n;i++){
    if(i<no0) v[i]=0;
    else v[i]=1;
  }
}
int main(){
  vector<int>v;
  
  v.push_back(1);
  v.push_back(1);
  v.push_back(0);
  v.push_back(0);
  v.push_back(1);
  v.push_back(1);
  v.push_back(0);
  

  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

  }
  cout<<endl;

  
  sort01(v);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}