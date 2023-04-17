#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  queue<int> que;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string cmd;
    cin >> cmd;

    if (cmd == "push") {
      int k;
      cin >> k;
      que.push(k);
    }
    if (cmd == "front") {
      if (que.empty())
        cout << "-1" << endl;
      else cout << que.front() << endl;
    }
    if (cmd == "back") {
      if (que.empty())
        cout << "-1" << endl;
      else cout << que.back() << endl;
    }
    if (cmd == "size") {
      cout << que.size() << endl;
    }
    if (cmd == "empty") {
      cout << que.empty() << endl;
    }
    if (cmd == "pop") {
      if (que.empty())
        cout << "-1" << endl;
      else {
        cout << que.front() << endl;
        que.pop();
      }
    }
  }
}