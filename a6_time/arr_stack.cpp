#include <iostream>
#define MX 20
int stack[MX];
using namespace std;
int pos = -1;

bool isEmpty() {
  return pos == -1;
}

bool isFull() {
  return pos == MX-1;
}

void push(int n) {
  if (isFull()) {
    cout << "stack is full" << endl;
  } else {
    stack[++pos] = n;
  }
}

void pop() {
  if(isEmpty()) {
    cout << "stack is empty" << endl;
  } else {
    pos--;
  }
}

void top () {
  if(isEmpty()) {
    cout << "stack is empty" << endl;
  } else {
    cout << stack[pos] <<endl;
  }
}

int main() {
  push(3);
  push(5);
  top();
  pop();
  pop();
  cout <<isEmpty();
}