#include <iostream>
#include <vector>

std::vector<int> vec;

int main() {
  int sum = 0;
  while(true) {
    int tmp;
    std::cin >> tmp;
    if(!tmp) break;
    vec.push_back(tmp);
    sum+=tmp;
  }

  for(int i=0;i<vec.size();i++) {
    std::cout << vec.at(i) << " ";
  }

  std::cout << "\n";
  std::cout << "평균 = " << sum/vec.size() << std::endl;
}