// Sum of array
#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[9];
    cout<<"enter the array element : ";
  for(int i=0;i<=8;i++){
     cin>>arr[i];
  }
  int sum =0;
  cout<<"sum of the array elemets : ";
  for(int i=0;i<=8;i++){
    sum=sum+arr[i];
    
  }
  cout<<sum;
}