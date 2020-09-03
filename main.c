// Author: Boyuan Lai bjl5716@psu.edu
// Collaborator: Isha Thukral ixt5078@psu.edu
// Collaborator: Jenna Booth jmb8809@psu.edu
// Collaborator: Derek Avery daa5514@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
char *degree = readline ("Enter temperature in celsius: ");
double c = atof(degree);
double f = 1.8*c+32.0;
printf("%.6f° in Celsius is equivalent to %.6f° Fahrenheit.\n",c,f);
  return 0;
}