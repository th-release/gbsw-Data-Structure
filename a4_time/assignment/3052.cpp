// 나머지
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<bool> vec(42);
  
  for (int i=0;i<10;i++) {
    int tmp = 0;
    cin >> tmp;
    vec[tmp%42] = 1;
  }

  int result = 0;
  
  for (auto count : vec) {
    if (count > 0) {
      result++;
    }
  }

  cout << result;
}