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

  int t;
  cin >> t;

  while (t--) {
    int n, i;
    cin >> n >> i;

    int bitmaskLS = n & (1 << i);
    int bitmaskRS = (n >> i) & 1;

    bitmaskLS == 0
        ? cout << 0 << endl
        : cout << 1 << endl;

    bitmaskRS == 0
        ? cout << 0 << endl
        : cout << 1 << endl;

    bitmaskRS == 1
        ? cout << 1 << endl
        : cout << 0 << endl;
  }

  return 0;
}
