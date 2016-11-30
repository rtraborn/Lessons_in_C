#include <stdio.h>

// print Fahrenheit-Celcius table

main()
{
  int VND, USD;
  int lower, upper, step;
  
  lower = 10000000;
  upper = 500000000;
  step = 10000000;

  VND = lower;
  while (VND <= upper) {
    USD = VND / 21000;
    printf("%3d %6d\n", VND, USD);
    VND = VND + step;
  }
}
