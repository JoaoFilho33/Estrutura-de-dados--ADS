#include <stdio.h>

float main() {
  float ms;
  printf("Informe uma velocidade em m/s: ");
  scanf("%f", &ms);

  printf("%f m/s equivalem a %f km/h\n", ms, ms*3.6);
}