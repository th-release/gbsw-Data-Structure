#include<iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  // input을 받습니다.
  int n[1000];
  // 크기가 1000인 n이라는 배열을 선언
  
  int cnt = 0;
  // 1부터 시작하여 순서대로 1, 2, 3, 4, ... 와 같이 증가하는 수열을 만들기 위해서 중첩된 for 루프를 사용
  // i를 1부터 시작하여 1씩 증가시키면서
  for (int i = 1; cnt<1000 ;i++) {
    // 안쪽 for 루프에서는 j를 0부터 i-1까지 1씩 증가시키면서, n[cnt]에 i를 저장하고 cnt를 1 증가
    for (int j = 0; j < i; j++) {
      n[cnt++] = i; 
      // cnt가 1000을 찍으면 나옴
      if (cnt == 1000) 
        break;
    }
  }
  //  n[0]부터 n[999]까지의 원소들에 1, 2, 2, 3, 3, 3, ... 와 같이 순서대로 증가하는 수열이 저장됨
  int sum = 0;
  // for 루프에서는 i를 a-1부터 b-1까지 1씩 증가시키면서, n[i]를 sum에 더해줍니다.
  for (int i = a-1; i <= b-1; i++) { 
    sum += n[i];
  }
  // 이제 바깥쪽 for 루프를 돌면서 a-1번째부터 b-1번째까지의 항들의 합을 구합니다.
  cout << sum << endl;
  return 0;
}