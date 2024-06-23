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

  int a = 5;
  int b = 3;
  cout << "Before: " << a << " " << b << endl;

  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  cout << "After: " << a << " " << b << endl;

  return 0;
}
