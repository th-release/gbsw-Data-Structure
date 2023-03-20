// 바구니 뒤집기
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> vec(N);
  
  for(int i=0; i<N; i++) {
    vec[i] = i+1;
  }

  for (int i=0; i<M; i++) {
    int I, J;
    cin >> I >> J;
    reverse(vec.begin()+I-1, vec.begin()+J);
  }

  for (auto item: vec) {
    cout << item << " ";
  }
}