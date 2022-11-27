#include<stdio.h>
#include<iostream>
using namespace std;
void intercala(int vetor[], int inicio, int meio, int fim) {
   int *tam = (int*)malloc((inicio+fim+1)*sizeof(int));

   if(tam == NULL) {
      abort();
   }

   int i = inicio;
   int j = meio + 1;
   int k = 0;

   while(i <= meio && j <= fim) {
      if(vetor[i] < vetor[j]) {
         tam[k++] = vetor[i++];
      }
      else {
         tam[k++] = vetor[j++];
      }
   }

   while(i < meio) {
      tam[k++] = vetor[j++];
   }

   while(j <= fim) {
      tam[k++] = vetor[j++];
   }

   for(k = 0; k <= fim - inicio; k++) {
      vetor[inicio+k] = tam[k];
   }
}


void merge_sort(int v[],int inicio, int fim) {
   if(inicio == fim) {
      return;
   }

   int meio = (inicio+fim)/2;
   merge_sort(v, inicio, meio);
   merge_sort(v, meio+1, fim);
   intercala(v, inicio, meio, fim);
}

int main(){
   int vetor[6] = {7, 9, 4, 3,6,1};
   int i;   



   printf("\n2.Vetor ordenado:\n");
   for(i = 0; i <= 5; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   //2.Vetor ordenado:
                  // 7 9 4 3 6 1 
}


