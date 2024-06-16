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

int countDigits(int num) {
  int temp = 0;
  int val = num;

  while (val != 0) {
    int lastDigit = val % 10;

    if (num % lastDigit == 0)
      temp++;

    val = val / 10;
  }

  return temp;
}

int main() {
  setupIO();
  /* ------- */

  int N;
  cin >> N;

  double res = (int)(log10(N) + 1);
  cout << res;

  return 0;
}
