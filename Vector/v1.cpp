// Capacity
#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
  // push back
  v.push_back(5);
  v.push_back(10);
  v.push_back(8);
  v.push_back(4);
  v.push_back(2);
  v.push_back(6);
  v.push_back(4);
  cout<<"size of the vector"<<v.size()<<endl;
  cout<<"capacity of the vector  "<<v.capacity()<<endl;
}