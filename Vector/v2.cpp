// Passing vector to function
#include<bits/stdc++.h>
using namespace std;
void  change(vector<int> &a){
  a[0]=88;
}
int main(){
  vector<int>v;
  v.push_back(5);
  v.push_back(4);
  v.push_back(9);
  v.push_back(6);
  v.push_back(1);
  v.push_back(7);
  v.push_back(8);
  for (int i = 0; i <v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  change(v);
  for (int i = 0; i <v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}