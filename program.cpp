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

int bruteGCD(int a, int b) {

  /**
   * Instead of running it in increasing order if you run it in descreasing order you will get result way before
   *
   * Complexity => O(min(a,b))
   */
  for (int i = min(a, b); i >= 1; i--) {
    if (a % i == 0 && b % i == 0)
      return i;
  }

  /**
   * This method give factor till sqrt(min(a,b)),
   * and if any one of then divides a & b eventually we will get GCD
   *
   * Complexity => O(sqrt(min(a,b)))
   *
   */
  int gcd = 1;
  for (int i = 1; i * i <= min(a, b); i++) {
    if (a % i == 0 && b % i == 0)
      gcd = i;
  }
  return gcd;
}

int GCD(int a, int b) {

  /**
   * By Euclidean Algorithm,
   * gcd(a, b) = gcd(a-b, b)
   * 
   * Complexity => O(log(min(a,b)))
   * 
   */

  /* 1 */
  // till both of them are not equal
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;

  /* 2 */
  // till one of them is 0 OR till both are greater than 0
  // while (a > 0 && b > 0) {
  while (a != 0 && b != 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  return a == 0 ? b : a;
}

int LCM(int a, int b) {
  return abs(a * b) / GCD(a, b);
}

bool armstrong(int a) {
  int ans = 0;
  int val = a;

  while (val != 0) {
    int lD = val % 10;
    ans += (lD * lD * lD);
    val = val / 10;
  }

  if (ans == a)
    return true;
  else
    return false;
}

void printDivisors(int n) {
  set<int> vec;

  // for (int i = 1; i <= sqrt(n); i++) {
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      vec.emplace(i);

      if (n / i == 1)
        continue;

      vec.emplace(n / i);
    }
  }

  for (auto el : vec) {
    cout << el << " ";
  }
  cout << endl;
}

bool isPrime(int n) {
  if (n == 0 || n == 1)
    return false;

  for (int i = 2; i * i <= n; i++) {

    if (n % i == 0)
      return false;
  }

  return true;
}

int main() {
  setupIO();
  /* ------- */

  int a, b;
  cin >> a >> b;

  cout << GCD(24, 56) << " " << LCM(24, 56) << endl;
  cout << armstrong(371) << endl;
  printDivisors(36);
  cout << isPrime(47) << endl;

  return 0;
}
