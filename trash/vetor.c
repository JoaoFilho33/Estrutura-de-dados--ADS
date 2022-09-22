#include <stdio.h>

int main(){
    int maior = 0, soma = 0;
    float media = 0;
    int array [] = {1, 2, 9, 4, 6};
    int len = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i < len; i++){
        soma += array[i];
        if(array[i] > maior){
            maior = array[i];
        }
    }
    media = (float)soma/(float)len;

    printf("Maior: %f\n", maior);
    printf("Media: %.2f\n", media);
    printf("Soma: %f\n", soma);
}