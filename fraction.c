#include <stdio.h>

float fracsum(void)
{
  int varA;
  int varB;
  float varC = varA / varB;

  int varD;
  int varE;
  float varF = varD / varE;

  double varG = varC + varF;

  printf("%f\n", varG);
  return varG; 
}