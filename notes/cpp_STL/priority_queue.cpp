#include <bits/stdc++.h>
using namespace std;

/**
 * Build using tree data structure
 * Time complexity of pop and push is O(log n) & top is O(1)
 */

/* 1 */
using MinHeap = priority_queue<int, vector<int>, greater<int>>;
/* 2 */
auto comparatorOuter = [](int &a, int &b) {
  return a < b;
};
using MinHeap2 = priority_queue<int, vector<int>, decltype(comparatorOuter)>;

int main() {
  /* max heap priority queue => max value is always at top */
  priority_queue<int> p;

  p.push(53);
  p.emplace(12);
  p.emplace(93);
  p.emplace(17);
  p.emplace(68);
  cout << "Pop: " << p.top() << endl;

  cout << "Empty: " << p.empty() << endl;

  /* swapping */
  priority_queue<int> p3;
  p3.push(12);
  p3.emplace(55);
  p3.emplace(41);
  p3.emplace(36);
  p3.emplace(86);

  p3.swap(p);

  // cout << "p After swapping:\n";
  // while (p.empty() != 1) {
  //   cout << p.top() << " ";
  //   p.pop();
  // }
  // cout << endl;

  // cout << "p3 After swapping:\n";
  // while (p3.empty() != 1) {
  //   cout << p3.top() << " ";
  //   p3.pop();
  // }
  // cout << endl;

  /* copying */
  priority_queue<int> p4(p);
  // while (p4.empty() != 1) {
  //   cout << p4.top() << " ";
  //   p4.pop();
  // }
  // cout << endl;

  /* mini heap priority queue => minimum value is always at top */
  priority_queue<int, vector<int>, greater<int>> p2;

  MinHeap p2;
  MinHeap2 p5(comparatorOuter);

  auto comparatorInner = [](int &a, int &b) {
    return a < b;
  };
  priority_queue<int, vector<int>, decltype(comparatorInner)> p4(comparatorInner);

  p2.emplace(53);
  p2.emplace(12);
  p2.emplace(93);
  p2.emplace(17);
  p2.emplace(68);
  cout << p2.top() << endl;

  cout << "mini heap priority queue_\n";
  while (p2.empty() != 1) {
    cout << p2.top() << " ";
    p2.pop();
  }
  cout << endl;

  return 0;
}
