#include <iostream>
using namespace std;

struct Car {
  char carName[20];
  int carGas;
  int carSpeed;
};

void ShowCar(Car myCar) {
  cout << "소유자 : " << myCar.carName << endl;
  cout << "연료량 : " << myCar.carGas << endl;
  cout << "속도 : " <<  myCar.carSpeed << endl;
}

int main() {
  Car orlando = {"choi", 100, 99};
  ShowCar(orlando);
}