#include <iostream>

template <typename T>

T sum(T a, T b) {
  return a+b;
}

int main() {
  std::cout << sum<int>(3, 5) << std::endl;
  std::cout << sum<float>(3.3, 5.5);
}