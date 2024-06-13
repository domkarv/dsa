#include <bits/stdc++.h>
using namespace std;

int main() {
  /* every function of stack has O(1) time complexity */
  /* only four main functions push, pop, front, back */

  queue<string> q;

  q.push("Omkar"); // Element will be added from back

  /**
   * emplace used here is different than used in vector, list, deque.
   * we are using emplace here to push element at last of queue and
   * in vector, list, deque we are using it to push at position we want
   */
  q.emplace("Date");
  q.emplace("Omkar Date");

  q.pop(); // Element at front(first) will be deleted

  cout << "Size of Queue: " << q.size() << endl;
  cout << "Element at front: " << q.front() << endl;
  cout << "Element at back: " << q.back() << endl;
  cout << "Is queue empty: " << q.empty() << endl;

  queue<string> q2;
  q2.emplace("abc");
  q2.emplace("xyz");
  q2.emplace("pqr");

  /* swapping */
  q2.swap(q);

  cout << "q: ";
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
  cout << "Size of stack: " << q.size() << endl;

  cout << "q2: ";
  while (!q2.empty()) {
    cout << q2.front() << " ";
    q2.pop();
  }
  cout << endl;
  cout << "Size of stack: " << q2.size() << endl;

  return 0;
}
