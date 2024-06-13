#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec = {5, 6, 9, 8, -4, 2, 3, 4, 4, 4};

  sort(vec.begin(), vec.end());

  for (auto &&el : vec) {
    cout << el << " ";
  }
  cout << endl;

  /* Decreasing order array */
  // sort(vec.begin(), vec.end(), [](int a, int b) {
  //   return a > b;
  // });

  // cout << *max_element(vec.begin(), vec.end()) << endl;
  // cout << *min_element(vec.begin(), vec.end()) << endl;

  /* Return sum of array/vector (need to pass first sum and third parameter) */
  // cout << accumulate(vec.begin(), vec.end(), 0) << endl;

  /* Return number of copies of a value in a sequence */
  // cout << count(vec.begin(), vec.end(), 4) << endl;

  /* Returns iterator to the first element that is equal to the specified value else `vec.end()` */
  // cout << *find(vec.begin(), vec.end(), 23) << endl;
  // cout << find(vec.begin(), vec.end(), 23) - vec.begin() << endl; // gives index to that number

  // reverse(vec.begin(), vec.end());
  // for (auto &&el : vec) {
  //   cout << el << " ";
  // }

  /* Returns true if boolean comparator function is true for each element in the vector/array, and false otherwise */
  // cout << all_of(vec.begin(), vec.end(), [](int x) {
  //   return x > 0;
  // }) << endl;

  /* Returns true if boolean comparator function is true for any element exists in vector/array, and false otherwise. */
  // cout << any_of(vec.begin(), vec.end(), [](int x) {
  //   return x > 0;
  // }) << endl;

  /* Returns true if boolean comparator function is false for each element in the vector/array, and false otherwise */
  // cout << none_of(vec.begin(), vec.end(), [](int x) {
  //   return x < 0;
  // }) << endl;

  /**
   * binary_search, lower_bound, upper_bound can only be applied sorted array
   */

  /* Note that this does not actually return an iterator to value. For that, use std::find or a container's specialized find member functions */
  /* Returns true/false depending on whether the element exists in array/vector */
  // cout << binary_search(vec.begin(), vec.end(), 7);

  /* Finds the 'first position' in which val could be inserted without changing the order */
  // cout << lower_bound(vec.begin(), vec.end(), 4) - vec.begin() << endl;
  // cout << lower_bound(vec.begin(), vec.end(), 7) - vec.begin() << endl;
  // cout << lower_bound(vec.begin(), vec.end(), 10) - vec.begin() << endl;

  /* Finds the 'last position' in which val could be inserted without changing the order */
  cout << upper_bound(vec.begin(), vec.end(), 4) - vec.begin() << endl;
  cout << upper_bound(vec.begin(), vec.end(), 7) - vec.begin() << endl;
  cout << upper_bound(vec.begin(), vec.end(), 10) - vec.begin() << endl;

  /**
   * Questions on 'lower_bound' and 'upper_bound'
   * 1. Find the first occurence of N in sorted array
   * 2. Find the last occurence of N in sorted array
   * 3. Find the smallest number larger than N in sorted array
   * 4. Find the largest number smaller than N in sorted array
   */

  /* --- */
  int num = 34;
  cout << __builtin_popcount(num) << endl; // returns set bits

  long long num2 = 12345678901245;
  cout << __builtin_popcountll(num2) << endl; // returns set bits for long long

  string s = "cab";
  // next_permutation(s.begin(), s.end()); // will print next permutation of given string

  // this while loop will print all permutations of string only if string is sorted
  while (next_permutation(s.begin(), s.end())) {
    cout << s << endl;
  }

  sort(s.begin(), s.end());

  // after sorting
  while (next_permutation(s.begin(), s.end())) {
    cout << s << endl;
  }

  return 0;
}