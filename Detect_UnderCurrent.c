
#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool UnderCurrent(float current, int time)
{
  if(current<K_UI_MIN && time==20)
  {
    return 1;
  } 
  else
    return 0;
}
