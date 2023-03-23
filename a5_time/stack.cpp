#include <iostream>
#include <stdio.h>
#include <stack>

std::stack<int> s;

int main() {
  s.push(1); // (1)
  s.push(5); // (2)
  s.pop();
  for(int i=0; i<4; i++) {
    s.push(i); // (4)
  }
  s.pop();
  s.pop(); // (5)
  while(!s.empty()) {
    printf("%d", s.top());
    s.pop();
  } // (6)
}

// (1) = 1
// (2) = 1 5
// (3) = 1
// (4) = 1 0 1 2 3
// (5) = 1 0 1
// (6) = 