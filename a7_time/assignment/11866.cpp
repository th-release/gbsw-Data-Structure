#include <iostream>
#include <queue>

using namespace std;

int main () {
  ios::sync_with_stdio(false);
  
  int n, k;
  cin >> n >> k;
  
  queue<int> que;
  
  cout << "<";
  for (int i = 1; i <= n; i++)
    que.push(i);
  
  int index = 0;
  int cnt = 0;
  while (true) {
    if ((index) % k == k-1) {
      int val = que.front();
      cout << val;
      que.pop();
      cnt++;
    } else {
      int val = que.front();
      que.pop();
      que.push(val);
      index++;
      continue;
    }
    
    if (cnt >= n)
      break;
    
    cout << ", ";
    index++;
  }
  
  cout << ">";
  
  return 0;
}