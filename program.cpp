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

void printPattern1(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

  */
}

void printPattern2(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    *
    * *
    * * *
    * * * *
    * * * * *

  */
}

void printPattern3(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }

    cout << endl;
  }

  /*
    Output:

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

  */
}

void printPattern4(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }

    cout << endl;
  }

  /*
    Output:

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

  */
}

void printPattern5(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= (n - (i - 1)); j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    * * * * *
    * * * *
    * * *
    * *
    *

   */
}

void printPattern6(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= (n - (i - 1)); j++) {
      cout << j << " ";
    }

    cout << endl;
  }

  /*
    Output:

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

   */
}

void printPattern7(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= (n - i); j++) {
      cout << "  ";
    }

    for (int j = 1; j <= ((2 * i) - 1); j++) {
      cout << "* ";
    }

    /* Can be ignored (Extra) */
    // for (int j = 1; j <= (n - i); j++) {
    //   cout << "  ";
    // }

    cout << endl;
  }

  /*
    Output:

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

   */
}

void printPattern8(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i - 1; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= (((2 * n) - 1) - ((2 * i) - 2)); j++) {
      cout << "* ";
    }

    /* Can be ignored (Extra) */
    // for (int j = 1; j <= i - 1; j++) {
    //   cout << "  ";
    // }

    cout << endl;
  }

  /*
    Output:

    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

   */
}

void printPattern9(int n) {

  for (int i = 1; i <= 2 * n; i++) {

    int stars = 2 * i - 1;
    int spaces = n - i;

    if (i > n) {
      stars = (((2 * n) - 1) - (2 * i - 2 * n)) + 2;
      spaces = i - n - 1;
    }

    for (int j = 1; j <= spaces; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

   */
}

void printPattern92(int n) {

  for (int i = 1; i <= 2 * n - 1; i++) {

    int stars = 2 * i - 1;
    int spaces = n - i;

    if (i > n) {
      stars = (((2 * n) - 1) - (2 * i - 2 * n));
      spaces = i - n;
    }

    for (int j = 1; j <= spaces; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

   */
}

void printPattern10(int n) {

  for (int i = 1; i <= 2 * n - 1; i++) {

    int stars = i;

    if (i > n) {
      stars = n - (i - n);
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *

   */
}

void printPattern11(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {

      if ((i + j) % 2 == 0)
        cout << 1;
      else
        cout << 0;

      cout << " ";
    }

    cout << endl;
  }

  /*
    Output:

    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

   */
}

void printPattern12(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }

    for (int j = 1; j <= 2 * n - 2 * i; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= i; j++) {
      cout << i - j + 1 << " ";
    }

    cout << endl;
  }

  /*
    Output:

    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1

   */
}

void printPattern13(int n) {

  int temp = 1;

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {
      cout << temp++ << " ";
    }

    cout << endl;
  }

  /*
    Output:

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

   */
}

void printPattern14(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {
      cout << char(65 + j - 1) << " ";
    }

    cout << endl;
  }

  /*
    Output:

    A
    A B
    A B C
    A B C D
    A B C D E

   */
}

void printPattern15(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n - i + 1; j++) {
      cout << char(65 + j - 1) << " ";
    }

    cout << endl;
  }

  /*
    Output:

    A B C D E
    A B C D
    A B C
    A B
    A

   */
}

void printPattern16(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {
      cout << char(65 + i - 1) << " ";
    }

    cout << endl;
  }

  /*
    Output:

    A
    B B
    C C C
    D D D D
    E E E E E

   */
}

void printPattern17(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n - i; j++) {
      cout << "  ";
    }

    int t = 0;
    for (int j = 1; j <= 2 * i - 1; j++) {

      cout << char(65 + t) << " ";

      if (j <= (2 * i - 1) / 2)
        t++;
      else
        t--;
    }

    cout << endl;
  }

  /*
    Output:

            A
          A B A
        A B C B A
      A B C D C B A
    A B C D E D C B A

   */
}

void printPattern18(int n) {

  for (int i = 1; i <= n; i++) {

    int t = i;
    for (int j = 1; j <= i; j++) {
      cout << char(65 + n - t--) << " ";
    }

    cout << endl;
  }

  /*
    Output:

    E
    D E
    C D E
    B C D E
    A B C D E

   */
}

void printPattern19(int n) {

  for (int i = 1; i <= 2 * n; i++) {

    int stars = n - i + 1;
    int spaces = 2 * (i - 1);

    if (i > n) {
      stars = i - n;
      spaces = 2 * n - 2 * (i - n);
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    for (int j = 1; j <= spaces; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *

   */
}

void printPattern192(int n) {

  for (int i = 1; i <= 2 * n; i++) {

    int stars = n - i + 1;
    int spaces = 2 * i - 2;

    if (i == n + 1)
      continue;

    if (i > n) {
      stars = (i - n);
      spaces = 2 * n - 2 * (i - n);
    }

    if (i == n + 1)
      continue;

    for (int j = 1; j <= stars; j++) {
      if (j == n)
        continue;

      cout << "* ";
    }

    for (int j = 1; j <= spaces - 1; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    * * * * * * * * *
    * * * *   * * * *
    * * *       * * *
    * *           * *
    *               *
    * *           * *
    * * *       * * *
    * * * *   * * * *
    * * * * * * * * *

   */
}

void printPattern20(int n) {

  for (int i = 1; i <= 2 * n - 1; i++) {

    int stars = i;
    int spaces = 2 * n - 2 * i;

    if (i > n) {
      stars = n - (i - n);
      spaces = 2 * (i - n);
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    for (int j = 1; j <= spaces; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *

   */
}

void printPattern202(int n) {

  for (int i = 1; i <= 2 * n - 1; i++) {

    int stars = i;
    int spaces = 2 * n - 2 * i;

    if (i > n) {
      stars = n - (i - n);
      spaces = 2 * (i - n);
    }

    for (int j = 1; j <= stars; j++) {
      cout << "* ";
    }

    for (int j = 1; j <= spaces - 1; j++) {
      cout << "  ";
    }

    for (int j = 1; j <= stars; j++) {
      if (i == n && j == 1)
        continue;
      cout << "* ";
    }

    cout << endl;
  }

  /*
    Output:

    *               *
    * *           * *
    * * *       * * *
    * * * *   * * * *
    * * * * * * * * *
    * * * *   * * * *
    * * *       * * *
    * *           * *
    *               *


   */
}

void printPattern21(int n) {

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n; j++) {

      if (i == 1 || j == 1 || i == n || j == n)
        cout << "* ";
      else
        cout << "  ";
    }

    cout << endl;
  }

  /*
    Output:

    * * * * *
    *       *
    *       *
    *       *
    * * * * *

   */
}

void printPattern22(int n) {

  for (int i = 1; i <= 2 * n - 1; i++) {

    int lfrt = i;
    int mdl = 2 * n - 2 * i;

    if (i > n) {
      lfrt = n - (i - n);
      mdl = 2 * n - 2 * (n - (i - n));
    }

    for (int j = 1; j <= lfrt; j++) {
      cout << n - j + 1 << " ";
    }

    for (int j = 1; j <= mdl; j++) {
      int x = (i > n) ? i - n + 1 : n - i + 1;
      cout << x << " ";
    }

    int x = (i > n) ? x = n - (i - n) : i;
    for (int j = 1; j <= lfrt; j++) {
      if (j == 1)
        continue;

      cout << n + 2 - x-- << " ";
    }

    cout << endl;
  }

  /*
    Output:

    5 5 5 5 5 5 5 5 5
    5 4 4 4 4 4 4 4 5
    5 4 3 3 3 3 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 2 1 2 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 3 3 3 3 4 5
    5 4 4 4 4 4 4 4 5
    5 5 5 5 5 5 5 5 5

   */
}

int main() {
  setupIO();
  /* ------- */

  int itr;
  cin >> itr;

  for (int i = 0; i < itr; i++) {
    int n;
    cin >> n;

    printPattern22(n);
  }

  return 0;
}
