#include <bits/stdc++.h>
using namespace std;

/**
 *             Reminder
 *
 *     2 | 14     0
 *    --------       ^
 *     2 | 7      1  |
 *    --------       ^
 *     2 | 3      1  |
 *    --------       ^
 *     2 | 1      1  |
 *    --------
 *       | 0
 *
 *    14 => 1110
 */

string decimalToBinary(int n) {

  if (n < 0) {
    n = pow(2, 8) + n; // for 8 bit (int size is 4 byte = 32 bit)
  }

  string ans = "";

  while (n > 0) {
    ans.append(to_string(n % 2));
    n = n / 2;
  }

  reverse(ans.begin(), ans.end());

  return ans == "" ? "0" : ans;
}

int decimalToBinary2(int n) {
  int i = 0, ans = 0;

  if (n < 0) {
    n = pow(2, 8) + n;
  }

  while (n > 0) {
    int lastBit = n & 1;
    double power = pow(10, i);
    ans += (power * lastBit);
    n = n >> 1;
    i++;
  }

  return ans;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int num;
    cin >> num;

    cout << decimalToBinary(num) << endl;
    cout << decimalToBinary2(num) << endl;
  }

  return 0;
}
