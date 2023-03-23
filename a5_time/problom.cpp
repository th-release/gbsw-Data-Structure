#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> st;
  int cnt = 0;
  int total = 0;
  cin >> cnt;
  for(int i=0; i<cnt;i++) {
    int tmp = 0;
    cin >> tmp;
    st.push(tmp);
  }

  while(!st.empty()) {
    if (st.top() % 2 == 0) 
      total += st.top();
    st.pop();
  }
  cout << total << endl;
}