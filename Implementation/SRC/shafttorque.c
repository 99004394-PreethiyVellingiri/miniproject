#include "../electricals.h"

float shafttorque(float Op ,int Nr) 
{
   return ((((60*Op)/(2*3.14*Nr))*100)/100);
   
} 