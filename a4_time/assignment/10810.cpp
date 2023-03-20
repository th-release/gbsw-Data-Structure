// 공 넣기
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> vec(N, 0);

  for (int i=0;i<M;i++) {
    int I, J, K;
    cin >> I >> J >> K;

    for (int l = I; l <= J; l++) {
      vec[l-1] = K;
    }
  }

  for (auto item: vec) {
    cout << item << " ";
  }

  

}