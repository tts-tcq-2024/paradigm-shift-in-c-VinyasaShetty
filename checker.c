#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {

if(IsTemperatureoutofRange(temperature) || socOutofRange(soc) || chargeRateOutofRange(chargeRate))
{
    printf("Temperature out of range!\n");
    printf("State of Charge out of range!\n");
    printf("Charge Rate out of range!\n");
    return 0;    
}
    return 1;    
}
int IsTemperatureoutofRange(float temp)
{
    return (temp <0 || temp >45 ) ? 1 :0;        
}
int socOutofRange(float soc)
{
    return (soc <20 || soc >85 ) ? 1 :0;        
}
int chargeRateOutofRange(float chargeRate)
{
    return (chargeRate > 0.8 ) ? 1 :0;        
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
