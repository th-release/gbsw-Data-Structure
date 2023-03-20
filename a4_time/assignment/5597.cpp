// 과제 안 내신 분?
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> vec(28, 0);
  vector<int> missing;
  vector<int>::iterator it;

  for (int i=0;i<28;i++) {
    int tmp = 0;
    cin >> tmp;
    vec.push_back(tmp);
  }

  for (int i=1; i<=30; i++) {
    it = find(vec.begin(), vec.end(), i);
    if (it == vec.end()) {
      missing.push_back(i);
    }
  }

  for (auto miss: missing) {
    cout << miss << endl;
  }
}