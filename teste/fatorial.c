#include <stdio.h>

int main(){
    int fatorial;
    int resp = 1;
    printf("Informe um valor: ");
    scanf("%d", &fatorial);

    for( ; fatorial>0; fatorial--){
        resp *= fatorial;
        printf("%d\n", fatorial);
    }

    printf("O Fatorial é: %d\n", resp);
}