// Linear search 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;

  int arr[n];
  for(int i=0;i<=n-1;i++){
     cin>>arr[i];
  }
   int x;
   cout<<"Enter the element that you want to find : ";
   cin>>x;


  for(int i=0;i<=n-1;i++){
    if(arr[i]==x){
      cout<<"index number"<<" " <<i;
      break;
    }
    else{
      cout<<"Element is not present in the array.";
    }
  }
}