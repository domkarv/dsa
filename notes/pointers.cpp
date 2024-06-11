#include <iostream>
using namespace std;

void addFivePTR(int *num) {
  *num = *num + 5;
}

void addFiveRFRNC(int &num) {
  num = num + 5;
}

int main() {
  /**
   * Pointer gives address of varialble
   */

  int num[] = {34, 65, 87};
  cout << num << " " << &num << " " << &num[0] << endl;
  cout << &num[1] << " " << num + 1 << " " << endl;
  cout << *num << " " << *(num + 1) << " " << *(num + 2) << endl;
  cout << *num << " " << *num + 1 << " " << *num + 2 << endl;
  cout << endl;

  int *ptr1 = &num[0];
  cout << &ptr1 << " " << ptr1 + 1 << endl;
  cout << *ptr1 << " " << *ptr1 + 1 << endl;
  cout << *ptr1 + 1 << " " << *(ptr1 + 1) << endl;

  cout << *ptr1 << " " << num[0] << endl;
  *ptr1 = 435;
  cout << *ptr1 << " " << num[0] << endl;
  cout << endl;

  /**
   * Double Pointers
   *
   *    *ptr1 => pointer to &num[0]
   *    **ptr2 => pointer to pointer of &num[0]
   */
  int **ptr2 = &ptr1;
  cout << ptr2 << endl;
  cout << *ptr2 << " " << ptr1 << endl;
  cout << **ptr2 << " " << *ptr1 << endl;
  cout << endl;

  int n = 5;
  cout << n << endl;
  addFivePTR(&n);
  cout << n << endl;
  addFiveRFRNC(n);
  cout << n << endl;

  return 0;
}
