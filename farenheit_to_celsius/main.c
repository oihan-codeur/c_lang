#include <stdio.h>

/* print Farenheit-Celsius table
*   for fahr = 0, 20, ..., 300 */ 
main ()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Fahrenheit\tCelsius\n");
  while (fahr <= upper)
  {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t\t\b%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
