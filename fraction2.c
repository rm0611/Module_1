#include <stdio.h>

double fracsum(float a, float b, float c, float d)
{

  float e = a / b;
  float f = c / d;
  double g = e + f;
  return g;
}

int main(void)
{
    printf("%.3f %.3f %.3f\n",
      fracsum(1,2,2,4),
      fracsum(1,4,1,8), 
      fracsum(4,3,5,6));
}