#include <stdlib.h>
#include "lista.h"

lista *criar_lista(int n){
    lista *L;

    L = (lista *) malloc(sizeof(lista));
    
    if (L == NULL){
        return NULL;
    }
L-> elementos =(int *) malloc(n * sizeof(int));

if (L-> elementos == NULL){
    free(L);
    return NULL;
}
L->capacidade = n;
L->ult_pos = -1;

return L;
}

int insere_lista(lista *L, int elemento){
    if (L == NULL){
        return 0;
    }
if L-> ult_pos == L-> capacidade -1){
    return 0;
}
L ->ult_pos++;

L-> elementos [L->ult_pos] = elemento;

return 1;
}

int buscar_lista(lista *L, int elemento){
    int i;

    if (L == NULL){
        return -1;
    }
for (i = 0; i <= L->ult_pos; i++){
    if (L->elementos[i] == elemento){
        return i;
    }
}
return -1;
}

int remove_lista (lista *L, int elemento){
    int pos;
    int i;

    if (L == NULL)[
        return 0;
    ]
pos = buscar_lista(L, elemento)

if (pos == -1){
    return 0;
}
for (i = pos; i < L->ult_pos; i++){
    L->elementos[i] = L->elementos[i+1];

}

l->ult_pos--;

return 1;

}

void destroi_lista(lista *L){
    if (L !=NULL){
        free(L->elementos);
        free(L);
    }
}