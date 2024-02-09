#include <stdio.h>

main()
{
  float celsius, fahr;
  float upper, lower, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  printf("Fahrenheit\tCelsius\n");
  while (celsius <= upper)
  {
    printf("%3.0f\t\t\b%6.1f\n");
    celsius += step;
  }
}
