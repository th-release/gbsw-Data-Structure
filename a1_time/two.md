---
marp: true
class: invert
paginate: true
backgroundColor: #123
---

# 문제. 일곱 난쟁이
### **최태혁**

---
문제. 

아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라고 주장했다. 뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도 일곱 난쟁이의 키의 합이 100이 됨을 기억해 냈다.

아홉 난쟁이의 키가 주어졌을 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.

---

입력.

아홉 개의 줄에 걸쳐 난쟁이들의 키가 주어진다. 주어지는 키는 100을 넘지 않는 자연수이며, 아홉 난쟁이의 키는 모두 다르며, 가능한 정답이 여러 가지인 경우에는 아무거나 출력한다.

---

출력.

일곱 난쟁이의 키를 오름차순으로 출력한다. 일곱 난쟁이를 찾을 수 없는 경우는 없다.

---
# include, 변수

```
#include <stdio.h>

int input[9]; // 9개의 입력을 받기 위해
int result[7]; // 결과물 담을 곳
int flag; // flag
```
---
# 메인 함수
```
int main(void) {
  for(int i = 0; i < 9; i++) {
    scanf("%d", &input[i]);
  }
  // 9개의 입력을 모두 받음.
  
  findResult(0, 0, 0);
  // total, cnt(난쟁이 수), idx(난쟁이 인덱스 for(i를 뭐로 시작할건지))
  // 재귀 함수 작동

  bubbleSort(height, 7);
  // 버블 정렬로 맞춰줌.

  for(int i = 0; i < 7; i++) {
    printf("%d\n", height[i]);
  }
  // 모두 출력
  
  return 0;
}
```
---
# 버블 정렬
```
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
```
---
# 난쟁이를 찾는 함수
```
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
    height[cnt] = input[i];         // 현재 조합에 i번째 난쟁이의 키를 추가
    combination(total + height[cnt], cnt+1, i+1);   // 다음 난쟁이의 키를 구하기 위해 재귀 호출
    if(flag == 1) {                // 키의 합이 100이 되는 조합이 나왔을 경우 사실 cnt == 7 && total == 100 으로 써도 상관 없다.
      return;                      // 함수 종료
    }
  }
  return
  // 총 난쟁이 수가 7명이 아니라면 pass
}
```
---
# 발표 끝. 감사합니다.