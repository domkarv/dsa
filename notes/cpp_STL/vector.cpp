#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> vec) {
  for (auto el : vec) {
    cout << el << " ";
  }
  cout << endl;
}

int main() {
  vector<pair<int, int>> vec;

  vec.push_back({34, 67});
  vec.push_back({89, 21});
  vec.push_back({56, 78});

  /* comparetively fast than 'push_back' */
  vec.emplace_back(94, 72);
  vec.emplace_back(56, 78);

  vec.pop_back(); // Removes last element

  // for (auto el : vec) {
  //   cout << el.first << " " << el.second << endl;
  // }
  // cout << endl;

  cout << (*(vec.end() - 1)).first; // vec.end() never points to last element, it points to after last element

  sort(vec.begin(), vec.end(), [](pair<int, int> pr1, pair<int, int> pr2) {
    if (pr1.first < pr2.first)
      return true;

    if (pr1.first == pr2.first)
      return pr1.second < pr2.second;

    return false;
  });

  // for (auto el : vec) {
  //   cout << el.first << " " << el.second << endl;
  // }
  // cout << endl;

  vector<int> vec2(5, 234); // creates a vector with 5 elements of value 234
  // vector<int> vec2(12); // creates a vector with 5 elements of value 0
  // printVector(vec2);

  cout << vec2.size() << endl;
  cout << vec2.capacity() << endl;

  /* clear vector */
  // printVector(vec2);
  vec2.clear();
  // printVector(vec2);

  cout << "Element at 2rd index: " << vec.at(1).first << endl; // returns element at index.
  cout << "Is vector is empty: " << vec.empty() << endl;       // returns true/false (1/0).
  cout << "Element at front: " << vec.front().second << endl;
  cout << "Element at end: " << vec.back().first << endl;

  cout << (*vec.begin()).first << " " << (*vec.begin()).second << endl;
  cout << (*(vec.begin() + 1)).first << " " << (*(vec.begin() + 1)).second << endl;
  cout << (*(vec.end() - 1)).first << " " << (*(vec.end() - 1)).second << endl;

  /* Copying vectors */
  // 1
  vector<int> vec3(vec2);

  // 2
  copy(vec2.begin(), vec2.end(), vec3.begin());

  // printVector(vec3);

  /* Insert values into vectors */
  vec3.insert(vec3.begin() + 3, 45);                       // inserts 45 at 3rd index
  vec3.insert(vec3.begin(), 4, 45);                        // inserts 45 from beginning at 4 places
  vec3.insert(vec3.begin(), vec2.begin(), vec2.end() - 3); // insert vec2 into vec3 from 'vec2.begin()' to 'vec2.end() - 3'
  vec3.emplace(vec3.begin(), 3453);

  // printVector(vec3);

  /* Vector swapping */
  vector<int> vec4 = {23, 56, 76, 73, 423, 7};

  // cout << "vec4: ";
  // printVector(vec4);
  // cout << "vec2: ";
  // printVector(vec2);

  vec4.swap(vec2);

  // cout << "vec4: ";
  // printVector(vec4);
  // cout << "vec2: ";
  // printVector(vec2);

  /* Vector reversing */
  // cout << "original: ";
  // printVector(vec4);

  reverse(vec4.begin(), vec4.end());

  // cout << "modified: ";
  // printVector(vec4);

  /* Deleting the value */
  vector<int> vec5 = {23, 56, 76, 73, 423, 7};
  printVector(vec5);

  /* Note this 'erase' operation could be expensive */
  vec5.erase(vec5.begin(), vec5.begin() + 3); // delete elements from 'x' to 'y - 1' position
  vec5.erase(vec5.begin(), vec5.end() - 3);

  vec5.erase(vec5.begin() + 3); // delete 4th element of vector

  printVector(vec5);

  return 0;
}