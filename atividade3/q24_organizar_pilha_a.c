#include <stdio.h>
#include <./pilha.h>

int main(){
    int tam;
    float item;
    float aux;

    printf("Quantidade de números: ");
    scafn("%d", &tam);

    Pilhas pilhaA = criaPilha(tam);
    Pilhas pilhaB = criaPilha(tam);

    printf("Itens: ");
    for(int i = 0; i < tam; i++){
        scanf("%f", &item);
        push(item, pilhaB);
    }

    printf("Tranks bro \n");
    while(!forPilhaVazia(pilhaB)){
        if(forPilhaVazia(pilhaA) || pilhaA -> item[pilhaA -> topo] >= pilhaB -> item[pilhaB -> topo]){
            push(pop(pilhaB, pilhaA));
        }
        else{
            aux = pop(pilhaB);
            printf("aux: %2.f\n", aux);

            while(!forPilhaVazia(pilhaA) && pilhaA -> item[pilhaA -> topo] < aux) {
                push(pop(pilhaA), pilhaB);
            }

            push(aux, pilhaA);
        }
    }
    showPilhas(pilhaA);

    system("pause");
}