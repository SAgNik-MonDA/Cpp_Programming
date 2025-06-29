// Passing array using function
#include <bits/stdc++.h>
using namespace std;

void display(int arr1[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr1[i] << endl;
  }
}

void change(int b[], int size) {
  b[0] = 99;
}

int main() {
  int arr[6] = {5, 6, 8, 10, 7, 8};
  int size = sizeof(arr) / sizeof(arr[0]); // ✅ fixed!
  
  cout << "Original array:" << endl;
  display(arr, size);

  change(arr, size);

  cout << "After change:" << endl;
  display(arr, size);

  return 0;
}
