#include <stdio.h>

int main(){
    float raio;
    printf("Raio da esfera: ");  
    scanf("%f", &raio);

    float volume = (4*3.14*(raio*raio*raio))/3;
    
    printf("Volume: %f\n", volume);
}