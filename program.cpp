#include <bits/stdc++.h>
using namespace std;

/**
 * This function help to setup input and output
 * in `input.txt` and `output.txt` file respectively.
 */
void setupIO() {
#ifndef INPUT_OUTPUT
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
/* ------- */

int *revArr(int arr[], int st, int len) {

  if (st >= len - 1 - st) {
    return arr;
  }

  /* 1 */
  // int temp = arr[st];
  // arr[st] = arr[len - 1 - st];
  // arr[len - 1 - st] = temp;

  /* 2 */
  swap(arr[st], arr[len - 1 - st]);

  return revArr(arr, st + 1, len);
}

void printArr(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  setupIO();
  /* ------- */

  int n;
  cin >> n;
  int arr[n];
  for (auto &&i : arr) {
    cin >> i;
  }

  cout << "Before: ";
  printArr(arr, n);

  int *rev = revArr(arr, 0, n);

  cout << "After: ";
  printArr(arr, n);

  return 0;
}
