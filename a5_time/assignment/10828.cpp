// 스택 구현
#include <iostream>
#include <string>
using namespace std;
class Stack {
  private:
    int st[1000005];
    int stackSize;

  public:
    void init() {
      stackSize = -1;
    }

    void push(int x) {
      st[stackSize+1] = x;
      stackSize += 1; 
    }

    void pop() {
      if (stackSize == -1) {
        cout << "-1" << endl;
        return;
      } else {
        cout << st[stackSize] << endl;
        st[stackSize] = 0;
        if (stackSize >= 0) {
          stackSize -= 1;
        } else {
          cout << "-1" << endl;
        }
        return;
      }
    }

    int top() {
      if (stackSize == -1) {
        return -1;
      } else {
        return st[stackSize];
      }
    }

    int size() {
      return stackSize + 1;
    }

    bool empty() {
      if (stackSize < 0) {
        return 1;
      } else {
        return 0;
      }
    }
};

int main() {
  Stack st;
  st.init();
  int cnt = 0;
  cin >> cnt;
  for (int i=0; i<cnt; i++) {
    string str;
    cin >> str;
    if (str.compare("push") == 0) {
      int tmp = 0;
      cin >> tmp;
      st.push(tmp);
      continue;
    } else if (str.compare("pop") == 0) {
      st.pop();
      continue;
    } else if (str.compare("size") == 0) {
      cout << st.size() << endl;
      continue;
    } else if (str.compare("empty") == 0) {
      cout << st.empty() << endl;
      continue;
    } else if (str.compare("top") == 0) {
      cout << st.top() << endl;
      continue;
    }
  }
}