#include <bits/stdc++.h>
using namespace std;

int main() {
  /**
   * In case of 'vector' we can access the elements with help of indexing, like,
   * vector<int> vec = {2, 3, 4, 5, 6};
   * cout << vec[2];
   *
   * But in case of some containers like sets and maps there is no any indexing,
   * so we have to use 'iterators'
   */

  /**
   * Iterators ~ Pointers
   *    => Not exactly the same but can be considered similar for better understanding
   *    => Both can traverse and access elements
   *    => Both can be dereferenced to access the value they point to using the '*' operator
   */

  /**
   * Difference between 'i++' and 'i + 1'.
   *
   * "i++" => gives next iterator
   * "i + 1" => gives next location
   *
   * In case of 'vector' both can be valid as vectors are stored in continuos memory location
   *
   * But in case of containers like sets and maps, which are not stored in continuos memory location.
   * So 'i + 1' will be invalid in that case as it gives next location.
   */

  vector<int> vec = {23, 76, 98, 48, 29};

  // vector<int>::iterator it = vec.begin();
  // cout << *it + 1 << endl;
  // cout << *(it + 1) << endl;

  /* Accessing 'vector' with Indexing */
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  /* Accessing 'vector' with Iterator */
  for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  /* Short for accessing 'vector' with Iterator */
  // 1
  for (auto it = vec.begin(); it != vec.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // 2
  for (int el : vec) {
    cout << el << " ";
  }
  cout << endl;
  cout << endl;

  /* Different ways of accessing array of pairs */
  vector<pair<int, int>> vec_p = {{23, 76}, {98, 48}, {29, 34}};

  vector<pair<int, int>>::iterator it_p;
  for (it_p = vec_p.begin(); it_p != vec_p.end(); it_p++) {
    cout << (*it_p).first << " " << (*it_p).second << endl;
  }
  cout << endl;

  for (it_p = vec_p.begin(); it_p != vec_p.end(); it_p++) {
    cout << it_p->first << " " << it_p->second << endl;
  }
  cout << endl;

  for (auto pr : vec_p) {
    cout << pr.first << " " << pr.second << endl;
  }

  return 0;
}
