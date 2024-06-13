#include <bits/stdc++.h>
using namespace std;

/*
 * every function of map has O(log n) time complexity
 *
 * complexity of unordered_map (O(1)) is better compared to set
 * but in worst case it goes to O(n)
 */

int main() {
  /**
   * map<key, data> mapName;
   * map stores data with unique keys and those keys are in sorted ordered
   */
  map<char, string> mp;

  /**
   * keys are unique
   * unordered map doesn't stores keys in sorted order but at random address
   */
  unordered_map<char, string> ump;

  /**
   * stores in sorted order
   * same keys can have diffrent data
   */
  multimap<char, string> mmp;

  mp['a'] = "omkar";
  mp['b'] = "date";
  cout << mp['a'] << endl;

  mp.insert({'b', "AARAV"}); // will not be added, bcoz key 'b' already exists
  mp.emplace('d', "Omkar");
  mp.emplace('c', "Om");

  /* 1 */
  for (auto i : mp) {
    cout << i.first << " " << i.second << endl;
  }

  /* 2 */
  for (auto i = mp.begin(); i != mp.end(); i++) {
    // cout << (*i).first << " " << (*i).second << endl;
    cout << i->first << " " << i->second << endl;
  }

  cout << "Size of Map: " << mp.size() << endl;

  mp.erase('a'); // data stored at this key will be erased with key
  mp.clear();    // delete all data from map
  cout << mp.empty() << endl;

  auto itr = mp.find('d'); // if element not found iterator will points to the position just after last element
  cout << itr->first << " " << itr->second << endl;
  cout << mp.find('c')->second << endl;

  cout << mp.at('c') << endl; // returns data stored at key passed

  /* Count */
  multimap<char, string> mmp2;
  mmp2.emplace('a', "Aarav");
  mmp2.emplace('a', "Gadge");
  mmp2.emplace('o', "Omkar");

  cout << mmp2.count('a') << endl; // returns how many elements are present having key passed

  /**
   * lower_bound & upper_bound only works when data is sorted
   * i.e., will never work in unordered map
   */

  return 0;
}
