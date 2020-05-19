#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool UnderVoltage(float voltage, int time)
{

 if(voltage<K_UV_MAX && time==20)
 {
   return 1; 
 } 
 else
   return 0;
}
