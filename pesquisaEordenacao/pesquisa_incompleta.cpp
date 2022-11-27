#include<stdio.h>
#include<iostream>
#include <string.h>

using namespace std;
int pesquisa_linear(int x,int v[], int n) {
   for(int i = 0; i < n; i++ ) {
      if(v[i] == x) return 1;
   }
   return 0;
}

int pesquisa_binaria(int x,int v[], int n) {
   int inicio = 0;
   int fim = n - 1;

   while (inicio <= fim) {
      int meio = (inicio + fim) / 2;

      if(x == v[meio]) {
         return 1;
      }
      if( x < v[meio]) {
         fim = meio - 1;
      } else {
         inicio = meio + 1;
      }
   }
   return 0;
}


int main(){
   int vetor[5] = {};
   int tam = sizeof(vetor)/sizeof(vetor[0]); 

   int valor;
   for (int i = 0; i < tam; i++) {
      cout << "Número: " << endl;// 1 2 3 4 5
      cin >> valor;
      vetor[i] = valor;
   }

   int numeroProcurado;
   cout << "Número desejado: " << endl;// 2
   cin >> numeroProcurado;

   int pesquisaL = pesquisa_linear(numeroProcurado, vetor, tam);
   cout << "Resultado Linear: " << pesquisaL << endl;// 1

   int pesquisaB = pesquisa_binaria(numeroProcurado, vetor, tam);
   cout << "Resultado Binária: " << pesquisaB << endl;// 1
}