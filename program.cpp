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

int fibbo(int n) {

  if (n == 1 || n == 2) {
    return n - 1;
  }

  return fibbo(n - 1) + fibbo(n - 2);
}

int main() {
  setupIO();
  /* ------- */

  int n, a = 0, b = 1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << a << " ";
    int temp = a;
    a = b;
    b += temp;
  }
  cout << endl;

  cout << n << "th fibbonacci number: " << fibbo(n) << endl;

  return 0;
}
