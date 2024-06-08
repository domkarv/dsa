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

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }

  for (int i = 2; i < n; i++) {
    if ((n % i) == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  setupIO();
  /* ------- */

  int itr;
  cin >> itr;

  for (int i = 0; i < itr; i++) {
    int n;
    cin >> n;

    cout << isPrime(n) << endl;
  }

  return 0;
}
