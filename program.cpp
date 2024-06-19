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

bool isPalindrome(string str, int st) {
  int en = str.length() - 1 - st;

  if (st >= en) {
    return true;
  }

  if (str[st] != str[en]) {
    return false;
  }

  return isPalindrome(str, st + 1);
}

int main() {
  setupIO();
  /* ------- */

  int n;
  cin >> n;

  while (n--) {
    string str;
    cin >> str;
    cout << isPalindrome(str, 0) << endl;
  }

  return 0;
}
