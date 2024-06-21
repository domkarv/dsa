#include <cmath>
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {

  for (int i = 0; i < 31; i++) {

    double x = pow(2, i);

    if (n == x)
      return true;
  }

  return false;
}

bool checkIfPowerOf2(int n) {
  n = abs(n);
  return n && (!(n & (n - 1)));
}

bool checkIsPowerOfTwo(int n) {

  if (n == 0)
    return false;

  int i = 0;
  while (n != 0) {
    if ((n & 1) == 1)
      i++;

    if (i > 1)
      return false;

    n = n >> 1;
  }

  return true;
}

int main() {
  int num;
  cin >> num;

  /**
   * Approch 1 (Brute Force) =>
   */
  cout << isPowerOfTwo(num);

  /**
   * Approch 2 =>
   * if num is power of 2 then (num & (num-1)) = 0.
   */
  cout << checkIfPowerOf2(num);

  /**
   * Approch 3 =>
   * Every power of 2 has only 1 bit of 1.
   * So if value of i goes more than 1 then it means num is not power of 2.
   */
  cout << checkIsPowerOfTwo(num);

  return 0;
}