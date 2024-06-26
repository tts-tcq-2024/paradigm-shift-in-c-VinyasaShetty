#include <stdio.h>
#include <assert.h>

int IsTemperatureoutofRange(float temperature)
{
    printf("Temperature out of range!\n");
    return (temperature < 0 | temperature > 45 ) ? 1 :0;        
}
int socOutofRange(float soc)
{
    printf("State of Charge out of range!\n");
    return (soc <20 | soc >85 ) ? 1 :0;        
}
int chargeRateOutofRange(float chargeRate)
{
     printf("Charge Rate out of range!\n");
    return (chargeRate > 0.8 ) ? 1 :0;        
}

int batteryIsOk(float temperature, float soc, float chargeRate) {

if((IsTemperatureoutofRange(temperature)) | (socOutofRange(soc)) | (chargeRateOutofRange(chargeRate)))
{
    return 0;    
}
    return 1;    
}


int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
