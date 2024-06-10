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

  // pair<int, pair<int, char>> pr[] = {{23, {43, 'O'}}, {32, {87, 'D'}}};
  // cout << pr[0].second.second << " " << pr[1].second.second;

  // pair<int, int> pr = {42, 54};
  // int a, b;
  // tie(a, b) = pr;
  // tie(a, b) = pr[0].second;
  // cout << a << " " << b;

  pair<int, int> pr = {54, 76};
  pair<int, int> pr2 = {43, 90};

  pr.swap(pr2);

  cout << pr.first << " " << pr.second;

  return 0;
}
