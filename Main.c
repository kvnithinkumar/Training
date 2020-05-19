#include<stdio.h>
#include<stdbool.h>
#include "Faults.h"

int main()
{
  float Current,Voltage,Frequency;
  int time=0;
  bool OverCurrentFault,OverVoltageFault,UnderCurrentFault,UnderVoltageFault,OverFrequencyFault,UnderFrequencyFault;
  
  printf("Enter Current");
  scanf("%f",&Current);
  printf("Enter Voltage");
  scanf("%f",&Voltage);
  printf("Enter Frequency");
  scanf("%f",&Frequency);
  printf("Enter time");
  scanf("%d",&time);
  printf("enter values");
  //Invoke fault functions
 while(1)
 {	 
  if(time < 20)
  {
	  time++;
  }
  else
  {
	  time = 0;
	  OverCurrentFault = 0;
	  OverVoltageFault = 0;
	  UnderCurrentFault = 0;
	  UnderVoltageFault = 0;
	  OverFrequencyFault = 0;
	  UnderFrequencyFault = 0;
  }
  UnderVoltageFault = UnderVoltage(Voltage,time);
  UnderFrequencyFault = UnderFrequency(Frequency,time);
 // OverFrequencyFault = OverFrequency(Frequency,time);
  //UnderCurrentFault = UnderCurrent(Current,time);
  /*OverCurrentFault = Over_Current(Current, time);*/
  //OverVoltageFault = OverVoltage(voltage, time);
	 
  if(OverCurrentFault)
  {	
    printf("OC Fault");
  }
  if(OverVoltageFault)
  {	
    printf("OV Fault");
  }
  if(UnderCurrentFault)
  {	
    printf("UC Fault");
  }
  if(UnderVoltageFault)
  {	
    printf("UV Fault");
  }
  if(OverFrequencyFault)
  {	
    printf("OF Fault");
  }
 }
  return 0;
}

