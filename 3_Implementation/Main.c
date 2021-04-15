#include <stdio.h>
#include <stdlib.h>
#include "INC/electricals.h"
int main() {
  
  int calculation;
  int i;

  typedef struct Input{
  int *a;
  float S,Pi;
  }Input;

  Input I;
  
  //int b[6];
  //printf("Enter the values of fr,p,Nr,Wm,Td,WCu:");
  //for(i=0;i<6;i++)
  // {
     //scanf("%d",&b[i]);
     
  //}
  
  //printf("Enter the value of Slip:");
  //scanf("%f",&I.S);
  //printf("Enter the value of Input power:");
  //scanf("%f",&I.Pi);
  //I.a=b;
  

  int b[6]={2,4,1440,20,179,35};
  //int b[6]={1,2,1300,10,120,20};
  I.S=0.04;
  I.Pi=250.6;
  I.a=b;

  Input *I1 = (Input*)calloc(10,sizeof(Input));  
  I1 = &I;

 typedef enum {
    Efficiency=1,
    Totallosses,
    Powerdeveloped,
    Rotorpower,
    Shafttorque,
    Torquebackward,
    Torqueforward,
    Synfrequency,
    Outputpower,
    Synspeed,
    Exit
    }choice;

typedef struct Output{
     int Sf,Ss;
     float Pd,T,Tl,Tf,Tb,Rp,Op,E;
 }Output;

  Output O1 ={0,0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
  Output *O =&O1;

  printf("  Induction motor specifications  \n");
  printf(" 1.Efficiency\n 2.Total losses\n 3.Power developed\n 4.Rotor power\n 5.Shafttorque\n 6.Torque backward\n 7.Torque forward\n 8.Sync frequency\n 9.Output power\n10.Sync speed\n 11.Exit\n");
start:
  scanf("%d",&calculation);

   O->Sf = synfrequency(I1->a[0],I1->S);
   O->Ss= synspeed(O->Sf,I1->a[1]);
   O->Pd = powerdeveloped(I1->a[4],I1->S);
   O->Op = outputpower(O->Pd,I1->a[3]);
   O->T = shafttorque(O->Pd,I1->a[2]);
   O->Tl = totallosses(I1->Pi,O->Op);
   O->E = efficiency(I1->Pi,O->Op);
   O->Rp = rotorpower(O->Pd,I1->a[5]);
   O->Tb= torquebackward( O->Rp,I1->a[4]);
   O->Tf = torqueforward(O->Rp,I1->a[4]);
   

    switch(calculation)
  {
    case Efficiency:
      printf("%.2f",O->E);
      break;
      case Totallosses:
      printf("%.2f",O->Tl);
      break;
      case Powerdeveloped:
      printf("%.2f",O->Pd);
      break;
      case Rotorpower:
      printf("%.2f",O->Rp);
      break;
      case Shafttorque:
      printf("%.6f",O->T);
      break;
      case Torquebackward:
      printf("%.2f",O->Tb);
      break;
      case Torqueforward:
      printf("%.2f",O->Tf);
      break;
      case Synfrequency:
      printf("%d",O->Sf);
      break;
      case Outputpower:
      printf("%.2f",O->Op);
      break;
      case Synspeed:
      printf("%d",O->Ss);
      break;
      //case Display:
      //display(O->Ss,O->Op,O->E,O->Rp,O->T,O->Pd,O->Tb,O->Tf,O->Tl,O->Sf);
      case Exit:
      exit(0);
      break;
 } 
  printf("\n---------------------------");
  goto start;
  free(I1);
  return 0;
}
