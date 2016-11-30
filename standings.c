#include <stdio.h>

// print Fahrenheit-Celcius table

int main()
{
  int EDM_w, CHI_w, CAL_w;
  float Ngames;
  float Cutoff;
  float EDM_per, CHI_per, CAL_per;
  
  EDM_w = 35;
  CHI_w = 51;
  CAL_w = 41;
  Ngames = 82;
  Cutoff = 40;

  EDM_per = 100 * (EDM_w / Ngames);
  CHI_per = 100 * (CHI_w / Ngames);
  CAL_per = 100 * (CAL_w / Ngames);

  if (EDM_per > Cutoff) {
    printf("%f\n", EDM_per);
  }
  if (CHI_per > Cutoff) {
    printf("%f\n", CHI_per);
      }
  if (CAL_per > Cutoff) {
    printf("%f\n", CAL_per);
     }
}
