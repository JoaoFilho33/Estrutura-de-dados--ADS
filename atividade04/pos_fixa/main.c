typedef struct no{
    float valor;
    struct no *proximo;
}No;

No* empilhar(No *pilha, float num) {
    No *novo = malloc(sizeof(No));

    if(novo) {
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    }

    if()
}