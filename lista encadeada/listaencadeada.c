

typedef struct nodo{
    int valor;
    struct nodo *proximo;
} nodo;

struct lista{
    int tamanho;
    nodo *inicio;
    nodo *fim;
}
