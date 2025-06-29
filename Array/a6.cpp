// Find large & second large
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int max = INT_MIN;
  int smax = INT_MIN;

  // Find max
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  // Find second max
  for (int i = 0; i < n; i++) { // ✅ fixed loop condition
    if (arr[i] != max && smax < arr[i]) {
      smax = arr[i];
    }
  }

  cout << "Max element: " << max << endl;

  if (smax == INT_MIN) {
    cout << "No second max element found (all elements may be equal)." << endl;
  } else {
    cout << "Second max element: " << smax << endl;
  }

  return 0;
}
