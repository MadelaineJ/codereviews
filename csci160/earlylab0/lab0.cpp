#include <cstdio>
int main()
{
float maxmark = 150;
printf("For an assigment out of %d\n",maxmark);
//store the percent for an A+ as a constant
const float aplusper = 90;
const float aper = 85;
const float aminusper = 80;
const float bplusper = 76;
const float bper = 72;
const float bminusper = 68;
const float cplusper = 64;
const float cper = 60;
const float cminusper = 55;
const float dper = 50;

float aplus = maxmark * aplusper / 100;
float a=maxmark*aper/100;
float aminus=maxmark*aminusper/100;
float bplus=maxmark*bplusper/100;
float b=maxmark*bper/100;
float bminus=maxmark*bminusper/100;
float cplus=maxmark*cplusper/100;
float c=maxmark*cper/100;
float cminus=maxmark*cminusper/100;
float d=maxmark*dper/100;

 
printf("minimum mark for A+ is %g.\n",aplus);
printf("mimimum mark for A is %g.\n",a);
}
