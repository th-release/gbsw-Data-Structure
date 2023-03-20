// 나이순 정렬
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> num1, pair<int, string> num2) {
  return num1.first < num2.first;
}

int main() {
  int num;
  cin >> num;

  pair<int,string> tmp;
  vector<pair<int,string> > vec;
  
  for(int i = 0; i < num; i++) {
    cin >> tmp.first >> tmp.second;
    vec.push_back(tmp);
  }

  stable_sort(vec.begin(), vec.end(), compare);
  
  for(int i = 0; i < num; i++)
    cout << vec[i].first << ' ' << vec[i].second << endl;
}