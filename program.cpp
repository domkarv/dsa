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

  vector<int> n;
  int input;

  while (cin >> input) {
    n.push_back(input);
  }

  cout << "Before: ";
  for (auto i : n) {
    cout << i << " ";
  }
  cout << endl;

  for (int i = 0; i < n.size() / 2; i++) {
    /* 1 */
    // int temp = n[i];
    // n[i] = n[n.size() - 1 - i];
    // n[n.size() - 1 - i] = temp;

    /* 2 */
    swap(n[i], n[n.size() - 1 - i]);
  }

  /* 3 */
  reverse(n.begin(), n.end());

  cout << "After: ";
  for (auto i : n) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
