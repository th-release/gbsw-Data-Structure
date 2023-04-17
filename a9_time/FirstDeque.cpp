#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> dq;
  deque<int>::iterator iter;
  dq.push_back(5);
  dq.push_back(4);
  dq.push_back(3);
  dq.push_front(3);
  dq.push_front(2);
  iter = dq.begin();
  dq.insert(iter+2, 9);
  for(iter=dq.begin(); iter!=dq.end(); iter++) {
    cout << *iter << ' ' << endl;
  }
  
  for(int i=0;i<dq.size();i++)
    cout << dq[i] << ' ';
}