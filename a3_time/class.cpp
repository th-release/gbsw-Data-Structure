#include <iostream>
#include <string>
using namespace std;

class Car {
  private :
    char carName[20];
    int carGas;
    int carSpeed;
  public :
    void Init(char *name, int gas) {
      strcpy(carName, name);
      carGas = gas;
      carSpeed = 0;
    }
    
    void ShowCar() {
      cout << "소유자 : " << carName << endl;
      cout << "연료량 : " << carGas << endl;
      cout << "속도 : " <<  carSpeed << endl;
    }

    void accel() {
      carGas -= 10;
      carSpeed += 10;
    }
};

int main() {
  Car orlando;
  orlando.Init("choi", 100);
  orlando.ShowCar();
  orlando.accel();
  orlando.accel();
  orlando.ShowCar();
}