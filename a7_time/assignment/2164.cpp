#include <iostream>
#include <queue>

using namespace std;

int main() {
  int k;
  cin >> k;

  deque<int> deq;  
  for (int i = 1; i <= k; i++) {
    deq.push_back(i);
  }
  
  while(!(deq.size() == 1)) {
    deq.pop_front();
    deq.push_back(deq.front());
    deq.pop_front();
  }

  cout << deq.back();
  return 0;
}