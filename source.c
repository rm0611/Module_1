#include <stdio.h>
#include <math.h>

double vectorlength(double a, double b, double c) 
{
  
  double length = sqrt(pow(a, 2)+pow(b, 2)+pow(c, 2));
  return length;
}

int main(void)
{
  printf("%.3f %.3f %.3f\n",
    vectorlength(10,20,30),
    vectorlength(40,50,70), 
    vectorlength(60,80,100));

  return 0;
}