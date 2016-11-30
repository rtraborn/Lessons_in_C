#include <stdio.h>

// print Fahrenheit-Celcius table

main()
{
  int CAD, USD;
  int lower, upper, step;
  
  lower = 0;
  upper = 1000;
  step = 50;

  CAD = lower;
  while (CAD <= upper) {
    USD = 0.71 * CAD;
    printf("%3d %6d\n", CAD, USD);
    CAD = CAD + step;
  }
}
