#infdef lista_h
#define lista_h

typedef struct {
    int capacidade;
    int ult_pos;
    int *elementos;
} lista;

int *criar_lista(int n);

void destroi_lista(int *L);

int insere_lista(lista *L, int elemento);

int remover_lista(lista *L, int elemento);

int buscar_lista(lista *L, int elemento);

#endif