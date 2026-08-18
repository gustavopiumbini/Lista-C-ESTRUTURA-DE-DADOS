#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

lista *cria_lista (size_t n) {
    lista *L;
    L = (lista *) malloc (sizeof(lista));
    if (L == NULL){
        return NULL;
    }

L->elementos = (int *) malloc(n * sizeof(int));

if (L->elementos == NULL){
    free(L);
    return NULL;
}

L->capacidade = n;
L->ult_pos = -1;

return L;

}