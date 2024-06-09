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

  int r, c;
  cin >> r >> c;

  int matrix[r][c];

  for (int j = 0; j < r; j++) {
    for (int k = 0; k < c; k++) {
      cin >> matrix[j][k];
    }
  }

  int rowStart = 0;
  int rowEnd = r - 1;
  int colStart = 0;
  int colEnd = c - 1;

  while (rowStart <= rowEnd && colStart <= colEnd) {

    for (int i = colStart; i <= colEnd; i++) {
      cout << matrix[rowStart][i] << " ";
    }
    rowStart++;

    for (int i = rowStart; i <= rowEnd; i++) {
      cout << matrix[i][colEnd] << " ";
    }
    colEnd--;

    for (int i = colEnd; i >= colStart; i--) {
      cout << matrix[rowEnd][i] << " ";
    }
    rowEnd--;

    for (int i = rowEnd; i >= rowStart; i--) {
      cout << matrix[i][colStart] << " ";
    }
    colStart++;
  }

  return 0;
}
