// Array using loop
#include<bits/stdc++.h>
using namespace std;

int main() {
  int brr[3][5];
  cout << "Enter elements for a 3x5 array:\n";

  // Input loop
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 5; j++) {
      cin >> brr[i][j];
    }
  }

  cout << "You entered:\n";
  // Output loop
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 5; j++) {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
