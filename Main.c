#include<stdio.h>
#include<stdbool.h>
#include "Faults.h"

int main()
{
  float Current,Voltage,Frequency;
  int time=0;
  bool UnderFrequencyFault;
  
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
	  
	  UnderFrequencyFault = 0;
  }
  
  UnderFrequencyFault = UnderFrequency(Frequency,time);
	 
  if(UnderFrequencyFault)
  {	
    printf("UF Fault");
  }
 }
  return 0;
}

