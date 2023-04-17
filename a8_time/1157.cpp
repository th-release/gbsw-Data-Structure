#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  string word;
  cin >> word;

  // 소문자, 대문자 상관이 없기 때문에 대문자로 통일합니다.
  // begin은 첫 글자, end는 제일 끝 글자를 가져 옵니다.
  // transform은 대문자로 바꿔주기 위해 씁니다.
  transform(word.begin(), word.end(), word.begin(), ::toupper);

  // 중복된 문자를 제거한 뒤, 리스트 형태로 만듭니다.
  vector<char> word_list(word.begin(), word.end());
  // 오름차순 정렬
  sort(word_list.begin(), word_list.end());
  // 중복 제거 unique
  auto last = unique(word_list.begin(), word_list.end());
  // 요소 제거를 위해 erase
  word_list.erase(last, word_list.end());

  // 중복된 문자를 제거한 뒤, 리스트 형태로 만들기 완성! 


  // 문자마다 몇 번 나왔는지 세어줍니다.
  vector<int> cnt;
  for (auto ch : word_list) {
    int char_count = count(word.begin(), word.end(), ch);
    cnt.push_back(char_count);
  }

  // 가장 많이 나온 문자를 찾아냅니다.
  auto max_it = max_element(cnt.begin(), cnt.end());

  // 중복되는 최댓값이 있을 경우 ?를 출력하고, 그렇지 않을 경우 해당 문자를 출력합니다.
  if (count(cnt.begin(), cnt.end(), *max_it) > 1) {
    cout << "?" << endl;
  } else {
    cout << word_list[distance(cnt.begin(), max_it)] << endl;
  }

  return 0;
}
