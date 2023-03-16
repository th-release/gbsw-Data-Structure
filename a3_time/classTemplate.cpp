#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Point {
  private :
    T xpos, ypos;
  public :
    void Show() {
      cout << "x: " << xpos << endl;
      cout << "y: " << ypos << endl;
    }

    void Init(T x, T y) {
      xpos = x;
      ypos = y;
    }
};

int main() {
  Point<int> p1;
  p1.Init(1, 2);
  p1.Show();
  Point<float> p2;
  p2.Init(1.1, 2.2);
  p2.Show();
}