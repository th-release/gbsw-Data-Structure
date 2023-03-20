// 공 바꾸기
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> vec(N);
  
  for(int i=0;i<N;i++) {
    vec[i] = i+1;
  }

  for(int i=0;i<M;i++) {
    int I, J;
    cin >> I >> J;
    if (I == J) continue;
    else {
      int tmp = vec[I-1];
      vec[I-1] = vec[J-1];
      vec[J-1] = tmp;
    }
  }

  for(auto item:vec) {
    cout << item << " ";
  } 
}