#include <iostream>
using namespace std;

void Shift(int a, int b) {
  cout << a + b << endl;
}

void Shift(int a, int b, int c) {
  cout << a + b + c << endl;
}

void Shift(int a, int b, int c, int d) {
  cout << a + b + c + d << endl;
}

int main() {
  Shift(1, 2);
  Shift(1, 2, 3);
  Shift(1, 2, 3, 4);
}