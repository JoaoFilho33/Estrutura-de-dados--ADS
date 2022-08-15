#include <stdio.h>

int main(){
    float celsius;
    printf("temperatura em graus celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (9*celsius+160)/5;

    printf("%f °F\n", fahrenheit);
}