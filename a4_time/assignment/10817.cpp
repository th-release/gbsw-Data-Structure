// 세 수
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> vec(3, 0);
  
  for(int i=0;i<3;i++) {
    int tmp = 0;
    cin >> tmp;
    vec[i] = tmp;
  }

  sort(vec.begin(), vec.end());

  cout << vec[1] << endl;
}