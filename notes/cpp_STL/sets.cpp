#include <bits/stdc++.h>
using namespace std;

/**
 * set is implemented using tree data structure
 *
 * every function of set has O(log n) time complexity
 *
 * complexity of unordered_set (O(1)) is better compared to set
 * but in worst case it goes to O(n)
 */

void printSet(set<int> s) {
  for (auto el : s) {
    cout << el << " ";
  }
  cout << endl;
}

int main() {
  /**
   * set stores only unique elements in sorted(increasing) order, if some elements are repeating it will store it only one's.
   * In set direct access of element is not possible like vector or deque
   */

  set<int> s = {49, 56, 4, 5, 86, 49, 5, 15, 56, 3, 63};
  printSet(s);

  /**
   * unordered_set stores only unique elements but not in sorted order, but at random place
   * upper_bound and lower_bound function never works here
   * rest all functions are same as set
   */
  unordered_set<int> us = {49, 56, 4, 5, 86, 49, 5, 15, 56, 3, 63};
  for (auto el : us) {
    cout << el << " ";
  }
  cout << endl;

  /**
   * multiset stores repeating elements but in sorted order
   */
  multiset<int> ms = {49, 56, 4, 5, 86, 49, 5, 15, 56, 3, 63};
  for (auto el : ms) {
    cout << el << " ";
  }
  cout << endl;

  s.insert(27); // time complexity --> O(log n)
  s.emplace(96);
  s.emplace(13); // emplace is faster than insert
  s.emplace(15);

  // cout << s.size() << endl;
  // printSet(s);

  auto it = s.find(15); // returns iterator pointing to element and not found then 's.end()'
  // cout << &it << *it << endl;

  // cout << "Before erase: ";
  // printSet(s);

  /**
   * In case of 'multiset' erase deletes all occurences of value,
   * to avoid that you can pass iterator
   */
  s.erase(419);       // you can pass either value or iterator
  s.erase(s.begin()); // element at 0th position will erased

  auto it1 = s.find(13); // returns iterator
  auto it2 = s.find(56); // returns iterator
  s.erase(it1, it2);     // used to erase elements from it1 to it2 - 1

  // cout << "After erase: ";
  // printSet(s);

  /* empty */
  cout << "Is set empty: " << s.empty() << endl;

  /* count */
  // count gives number of elements container has,
  // but as set contains unique values so this will only return '0/1'
  cout << "5 present or not: " << s.count(5) << endl;

  // NOTE => lower_bound & upper_bound only when data is sorted
  // i.e., will never works in unordered set
  auto it5 = s.lower_bound(4); // present in set
  auto it6 = s.lower_bound(6); // not present in set
  // cout << *it5 << " " << *it6 << endl;

  auto it7 = s.upper_bound(86); // present in set
  auto it8 = s.upper_bound(90); // not present in set
  // cout << *it7 << " " << *it8;

  return 0;
}
