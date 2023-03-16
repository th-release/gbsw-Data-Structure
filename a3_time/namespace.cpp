#include <iostream>

namespace printFirst {
  void print() {
    printf("hello ");
  }
}

namespace printSecond {
  void print() {
    printf("world");
  }
}

int main() {
  print();
  printSecond::print();
}

