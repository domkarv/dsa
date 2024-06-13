#include <bits/stdc++.h>
using namespace std;

int main() {
  /* every function of stack has O(1) time complexity */
  /* only three main functions push, pop, top */

  stack<string> st; // cannot initialize stack

  st.push("Omkar");

  /**
   * emplace used here is different than used in vector, list, deque.
   * we are using emplace here to push element at top of stack and
   * in vector, list, deque we are using it to push at position we want
   */
  st.emplace("Date");
  st.emplace("Omkar Date");

  st.pop(); // Element at top(last) will be deleted

  cout << "Size of stack: " << st.size() << endl;
  cout << "Element at top: " << st.top() << endl;
  cout << "Is stack empty: " << st.empty() << endl;

  while (!st.empty()) {
    cout << st.top() << endl;
    st.pop();
  }
  cout << "Size of stack: " << st.size() << endl;

  stack<string> s2;
  s2.emplace("abc");
  s2.emplace("xyz");
  s2.emplace("pqr");

  /* swapping */
  s2.swap(st);

  cout << "s:" << endl;
  while (!st.empty()) {
    cout << st.top() << endl;
    st.pop();
  }
  cout << "Size of stack: " << st.size() << endl;

  cout << "s2:" << endl;
  while (!s2.empty()) {
    cout << s2.top() << endl;
    s2.pop();
  }
  cout << "Size of stack: " << s2.size() << endl;

  return 0;
}
