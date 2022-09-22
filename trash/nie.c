#include <stdio.h>

int main(void){
    int a = 3, b = 5;
    int *p = &a, *q = &b;
    
    *p = *p + *q;
    *q = *p - * q;
    *p = *p - *q;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}

/*
são criados dois inteiros a = 3, e b = 5;
são criados dois ponteiros *p que aponta pro endereço de memória a que é 3;
e *q que aponta pro endereço de memória de b que é 5;

o valor no endereço de memória do ponteiro p recebe a soma do valor presente no endereço de memória
de p mais o valor no enderço de memória de q, resultando em 8;
o valor no endereço de memória do ponteiro q recebe a soma do valor presente no endereço de memória
de p menos o de q, que resulta em 3;
o valor no endereço de memória de p recebe a subtracao entre o valor no endereço de memória de q(8)
menos o de q(3), resultando em 5.
*/