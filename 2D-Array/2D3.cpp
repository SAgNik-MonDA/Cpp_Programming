// Transpose
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter the number of rows : ";
  cin>>m;
  int n;
  cout<<"Enter the number of columns : ";
  cin>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  } 

  cout<<endl;

  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

}