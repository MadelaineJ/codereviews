#include <cstdio>
int main()
//Madelaine Jones
//Lab0
//this program tells the user the mark required to achieve every
//  letter grade for an assignement out of 150
{
  //these are the percentage barriers for every mark
  float max = 150;
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
  //these are the formulas for calculating what mark is required
  //for which letter grade

  float aplus = aplusper*max/100;
  float a = aper*max/100;
  float aminus = aminusper*max/100;
  float bplus = bplusper*max/100;
  float b = bper*max/100;
  float bminus =bminusper*max/100;
  float cplus = cplusper*max/100;
  float c = cper*max/100;
  float cminus = cminusper*max/100;
  float d = dper*max/100;

  printf("For an exam out of %g, these are the minimum marks required to\nattain each letter grade:\n", max);

  printf("To get an A+ you need %g \n",aplus);
  printf("To get an A you need %g \n",a);
  printf("To get an A- you need %g \n",aminus);
  printf("To get an B+ you need %g \n",bplus);
  printf("To get an B you need %g \n",b);
  printf("To get an B- you need %g \n",bminus);
  printf("To get an C+ you need %g \n",cplus);
  printf("To get an C you need %g \n",c);
  printf("To get an C- you need %g \n",cminus);
  printf("To get an D you need %g \n",d);
  printf("Anything lower than %g is an F \n", d);

}
