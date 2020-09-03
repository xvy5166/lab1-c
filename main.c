#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *Celsius = readline("Enter temperature in celsius: ");
  double Celsius_double = atof(Celsius);
  double Fahrenheit = Celsius_double*1.8+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", Celsius_double, Fahrenheit);
  return 0;
}

