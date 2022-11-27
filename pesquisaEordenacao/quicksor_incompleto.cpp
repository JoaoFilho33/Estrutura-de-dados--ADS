#include<stdio.h>
#include<iostream>
using namespace std;
void Quick(int vetor[10], int inicio, int fim) {
   int i = inicio;
   int j = fim;
   int pivo = vetor[(i + j) / 2];
   int temp;

   while (i <= j) {
      while (vetor[i] < pivo)
         i++;
      while (vetor[j] > pivo)
         j--;
      if (i <= j)
      {
         temp = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = temp;
         i++;
         j--;
      }
   }
   if (j > inicio)
      Quick(vetor, inicio, j);
   if (i < fim)
      Quick(vetor, i, fim);
}

int main(){
   int vetor[6] = {7, 9, 4, 3,6,1};
   int i;   
   Quick(vetor, 0, 5);
   printf("\n2.Vetor ordenado:\n");
   for(i = 0; i <= 5; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   /*2.Vetor ordenado:
                     1 3 4 6 7 9*/
}