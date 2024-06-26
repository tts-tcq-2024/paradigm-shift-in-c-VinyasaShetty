#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int result;
  result = ((temperature < 0 || temperature > 45) || (soc < 20 || soc > 80) || (chargeRate > 0.8)) ?  0:  1;
  return result;
}
  

int main() {
  int a;
  a= assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
