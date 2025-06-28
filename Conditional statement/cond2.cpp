
#include<iostream>
int main(){
  using namespace std;
  int day;
  cout<<"enter the day number : ";
  cin>>day;
  switch(day){
    case 1:
    cout<<"Monday";
    break;
    case 2:
    cout<<"Tuesday";
    break;
    case 3:
    cout<<"Wednestday";
    break;
    case 4:
    cout<<"Thuresday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"Saturday";
    break;
    case 7:
    cout<<"Sunday";
    break;
    default:
    cout<<"Invalid";
  }
  return 0;
}