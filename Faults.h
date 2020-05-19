#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define K_UV_MAX 5.0
#define K_UI_MIN 1.0
#define K_UF_MIN 350.0
#define K_OC_MIN 10.0
#define K_OF_MAX 450.0
#define K_OV_MAX 15.0

bool UnderVoltage(float voltage,int time);
bool UnderCurrent(float current,int time);
bool OverFrequency(float Frequency, int time);
bool UnderFrequency(float Frequency, int time);
bool OverCurrent(float current, int time);  
bool OVerVoltage(float voltage, int time);
