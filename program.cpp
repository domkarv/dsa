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

int main() {
  setupIO();
  /* ------- */

  int arr[] = {4, 3, 7, 8, 9};

  int ARR_LEN = sizeof(arr) / sizeof(arr[0]);

  // fill(arr, arr + ARR_LEN, 45);

  for (int i = 0; i < ARR_LEN; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + ARR_LEN, [](int a, int b) -> bool {
    return a < b;
  });

  for_each(arr, arr + ARR_LEN, [](int &x) {
    x = x * 2;
  });

  for (int i = 0; i < ARR_LEN; i++) {
    cout << arr[i] << " ";
  }

  // for (int i = 0; i < ARR_LEN / 2; i++) {
  //   swap(arr[i], arr[ARR_LEN - 1 - i]);
  // }

  // for (int i = 0; i < ARR_LEN; i++) {
  //   cout << arr[i] << " ";
  // }

  return 0;
}
