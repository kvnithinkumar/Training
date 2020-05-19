#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool UnderFrequency(float Frequency, int time)
{

 if(Frequency<K_UF_MIN && time==20)
 {
   return 1; 
 }
 else
 {
   return 0;
 }
}
