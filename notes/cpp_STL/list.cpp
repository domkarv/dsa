#include <bits/stdc++.h>
using namespace std;

void printList(list<int> ls) {
  for (int i : ls) {
    cout << i << " ";
  }
  cout << endl;
}

/* STL lists are implemented using doubly linked lists */

int main() {
  // In list direct access of element is not possible like vector or deque

  list<int> ls(4, 100); // This gives a list of size 4 with all elements being the value of '100'
  // list<int> ls(4);   // This gives a list of size 4 with all elements being the value of '0'

  // printList(ls);

  list<int> ls2;
  ls2.push_front(64);
  ls2.emplace_front(14); // emplace_front is comparatively faster than push_front
  ls2.push_back(56);
  ls2.emplace_back(16); // emplace_back is comparatively faster than push_back

  // printList(ls2);

  ls2.pop_back();
  ls2.pop_front();

  // printList(ls2);

  /**
   * Rest functions are same as vector
   * begin, end, clear, insert, size, swap, emplace, etc
   */

  list<int> ls3 = {32, 56, 7, 67, 8, 6};

  cout << "Size of list: " << ls3.size() << endl;
  cout << "Is list is empty: " << ls3.empty() << endl; // returns true/false (1/0).
  cout << "Element at front: " << ls3.front() << endl;
  cout << "Element at end: " << ls3.back() << endl;

  /* clears list */
  ls3.clear();
  cout << ls3.size() << endl;

  list<int> x(ls3.size());

  return 0;
}