#include <stdio.h>
#include "Faults.h"

bool UnderCurrent(int PHA_I,int PHB_I,int PHC_I, int time)
{
   int PHUI;
   int flag_undercurrent;
 
    if (PHA_I >= PHB_I) {
        PHUI = PHA_I;
    } else {
        PHUI = PHB_I;
    }
    if (PHUI >= PHC_I) {
    } else {
       PHUI = PHC_I;
    }
 
 if(PHUI<K_UI_MIN && time==20)
 {
   return = 1; 
 } 
 else()
   return = 0;
}
