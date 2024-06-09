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

  string str = {'o', 'm', 'k', 'a', 'r', ' ', 'd', 'a', 't', 'e'};

  string val = "date";

  size_t res = str.find(val);

  if (res == string::npos) {
    cout << "'" << val << "' not found!";
  } else {
    str.replace(res, val.length(), "is 🔥");
  }

  // str.pop_back();

  string str3 = "omkar";
  string str5 = "omkar";

  bool flag = str3 == str5;

  if (flag) {
    cout << "True";
  } else {
    cout << "False";
  }

  return 0;
}
