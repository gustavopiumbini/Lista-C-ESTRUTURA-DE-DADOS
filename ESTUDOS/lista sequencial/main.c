#include <stdio.h>
#include "lista.h"

int main(){
    lista *L
    int pos;

    L = criar_lista(5);

    if (L == NULL){
        printf("Erro ao criar a lista.\n");
        return 1;
    }
insere_lista(L, 10);
insere_lista(L, 20);
insere_lista(L, 30);

pos = buscar_lista(L, 20);

if (pos != 1){
    printf("O elemento 20 encontrado na posicao %d.\n", pos);

} else {
    printf("Elemento nao encontrado.\n");
}
remover_lista(L, 20);

pos = buscar_lista(L, 20);

if (pos == -1){
    printf("Elemento 20 foi removido.\n");
}
destroi_lista(L);

return 0;
}
