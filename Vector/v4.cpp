#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
  // push back
  v.push_back(5);
  cout<<v.size()<<endl;
  v.push_back(1);
  v.push_back(4);
  cout<<v.capacity()<<endl;
  v.push_back(9);
  v[0]=90;
  cout<<v[0]<<"";
}