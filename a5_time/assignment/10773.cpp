// 제로
#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> st;
  int cnt = 0;
  int total = 0;
  cin >> cnt;
  for (int i=0;i<cnt;i++) {
    int tmp = 0;
    cin >> tmp;

    if (tmp == 0) {
      st.pop();
    } else {
      st.push(tmp);
    }
  }
  
  while(!st.empty()) {
    total += st.top();
    st.pop();
  }
  cout << total << endl;
}