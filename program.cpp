#include <bits/stdc++.h>
using namespace std;

/**
 * alias cpp='function _cpp(){ g++ "$1" -o "${1%.*}.exe" && ./"${1%.*}.exe" && rm "${1%.*}.exe"; }; _cpp'
 *    => Add this alias line command to ~/.bash_aliases and source .bash_aliases
 *
 * This is a function called "cpp" that takes file name as input.
 *
 * This is helpful bcoz instead of running this:
 * g++ fileName.cpp -o fileName.exe && ./fileName.exe && rm fileName.exe
 *
 * this alias help you to run only:
 * cpp fileName.cpp
 */

int main() {
/**
 * This below code has nothing with above alias, we can use this without above alias.
 * This only helps to take input from input.txt file and return output to output.txt file
 */
#ifndef INPUT_OUTPUT
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  cout << "Hello World!";

  return 0;
}
