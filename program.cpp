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

int gcd(int a, int b) {
  while (a != 0 && b != 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  return a == 0 ? b : a;
}

string gcdOfStrings(string str1, string str2) {
  if (str1 + str2 != str2 + str1)
    return "";

  return (str1 + str2).substr(0, gcd(str1.length(), str2.length()));
}

int main() {
  setupIO();
  /* ------- */

  int t;
  cin >> t;

  while (t--) {
    string str1, str2;
    cin >> str1 >> str2;

    cout << gcdOfStrings(str1, str2) << endl;
  }

  return 0;
}
