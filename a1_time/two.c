#include <stdio.h>
 
int input[9]; // 9개의 입력을 받기 위해
int result[7]; // 결과물 담을 곳
int flag;

void bubbleSort(int arr[], int size) {
  int i, j, temp;

  // size-1번 반복하며 정렬을 수행
  for (i = 0; i < size - 1; i++) {
    // i번째를 제외한 뒤쪽 요소들 중 가장 작은 값을 i번째 요소와 교환
    for (j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) { // 인접한 두 원소를 비교하여 크기가 작은 원소가 앞으로 오도록 정렬
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

 
void findResult(int total, int cnt, int idx) {
  if(cnt == 7) {     // 난쟁이 수가 7명이 되면
    if(total == 100) { // 키의 합이 100이면
      flag = 1;      // flag를 1로 변경 
      return;        // 함수 종료
    } else {
      return;        // 아니면 함수 종료
    }
  }
  
  for(int i = idx; i < 9; i++) {    // 9명의 난쟁이 중에서 조합을 구하기 위해 반복
    result[cnt] = input[i];         // 현재 조합에 i번째 난쟁이의 키를 추가
    findResult(total + result[cnt], cnt+1, i+1);   // 다음 난쟁이의 키를 구하기 위해 재귀 호출
    if(flag == 1) {                // 키의 합이 100이 되는 조합이 나왔을 경우 사실 cnt == 7 && total == 100 으로 써도 상관 없다.
      return;                      // 함수 종료
    }
  }
  return;
  // 총 난쟁이 수가 7명이 아니라면 pass
}

 
int main(void) {
  for(int i = 0; i < 9; i++) {
    scanf("%d", &input[i]);
  }
  // 9개의 입력을 모두 받음.
  
  findResult(0, 0, 0);
  // total, cnt(난쟁이 수), idx(난쟁이 인덱스 for(i를 뭐로 시작할건지))
  // 재귀 함수 작동

  bubbleSort(result, 7);
  // 버블 정렬로 맞춰줌.

  for(int i = 0; i < 7; i++) {
    printf("%d\n", result[i]);
  }
  // 모두 출력
  
  return 0;
}