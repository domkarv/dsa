#include <bits/stdc++.h>
using namespace std;

void setupIO() {
#ifndef INPUT_OUTPUT
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int main() {
  setupIO();
  /* ------- */

  int ROW_LEN, COL_LEN;
  cin >> ROW_LEN >> COL_LEN;

  for (int i = 0; i < ROW_LEN - 1; i++) {

    for (int j = 0; j < i + 1; j++) {
      cout << COL_LEN - j << " ";
    }

    for (int j = 1; j < COL_LEN - i; j++) {
      cout << COL_LEN - i << " ";
    }

    for (int j = 1; j < COL_LEN - i; j++) {
      cout << COL_LEN - i << " ";
    }

    for (int j = i; j > 0; j--) {
      cout << COL_LEN - j + 1 << " ";
    }

    cout << endl;
  }

  for (int i = 0; i < ROW_LEN; i++) {

    for (int j = 0; j < COL_LEN - i; j++) {
      cout << COL_LEN - j << " ";
    }

    for (int j = i; j > 0; j--) {
      cout << i + 1 << " ";
    }

    for (int j = i; j > 0; j--) {
      cout << i + 1 << " ";
    }

    for (int j = 1; j < COL_LEN - i; j++) {
      cout << j + i + 1 << " ";
    }

    cout << endl;
  }

  return 0;
}
