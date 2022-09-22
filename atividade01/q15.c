#include <stdio.h>

int main(){
    float fahrenheit;
    printf("temperatura em graus fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (5*fahrenheit-160)/9;

    printf("%f °C\n", celsius);
}