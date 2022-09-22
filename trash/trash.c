#include <stdio.h>
typedef struct{ char valor[10];} Str;

int main(void){
    Str x = {"um"};
    Str y = {"dois"};

    puts(x.valor);
    x = y;
    puts(x.valor);
    return 0;
}

/*
O programa cria uma struct de tipo Str
em seguida uma uma struct de tipo str que recebe uma string "um";
em seguida a mesma coisa, so que com o valor "doi";
printa o valor na struct x, que é "um"
x receve o valor da struct y.
printa o valor na struct x, que agora é "dois"
*/