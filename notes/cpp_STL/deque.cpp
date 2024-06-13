#include <deque> // header file for STL deque(double ended queue)
#include <iostream>
using namespace std;

// STL deque are implemented using static arrays

void printDeque(deque<int> dq) {
  for (int i : dq) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  // we can access deque elements easily by 'd[i]'-> i= 0,1,2,3,...,d.size()
  // we can overwrite this values simply by
  // cin >> d[i]; // -> i= 0,1,2,3,...,d.size()

  // deque<int> d(4); // This gives a deque of size 4 with all elements being the value of '0'.
  // for (int i = 0; i < 4; i++)
  // {
  //    cout << d[i] << " ";
  // }
  // deque<int> d(4, 100); // This gives a deque of size 4 with all elements being the value of '100'.
  // for (int i = 0; i < 4; i++)
  // {
  //    cout << d[i] << " ";
  // }

  deque<int> d;
  d.push_front(98);
  d.emplace_front(35);
  d.push_back(45);
  d.emplace_back(53);
  d.emplace_back(72);
  d.emplace_back(13);

  printDeque(d);

  /**
   * Rest functions are same as vector
   * begin, end, clear, insert, size, swap, emplace, etc
   */

  // d.pop_front(); // pops the element from deque
  // d.pop_back();
  // for (int i : d)
  // {
  //    cout << i << " ";
  // }
  // cout << endl;

  return 0;
}