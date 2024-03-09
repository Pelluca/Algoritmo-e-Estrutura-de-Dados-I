typedef struct lista Lista;

/*
Funçao que inicializa a lista
Atrinuindo Null
*/
Lista * cria_lista(void);


/*
Função que insere elemento inteiro na lista
Argumentos:
    lista * Lista
    Int Valor: valor inteiro a ser inserido
Retorno:
    Nova lista
*/
Lista * insere_elemento(Lista * lista, int valor);


/*
Função que imprime um elemento na tela
Argumento:
    Lista * lista
    Lista * index
Essa função não retorna nada
*/
void imprime_elemento(Lista * lista);


/*
Função que verifica se a lista está vazia
Argumentos:
    Lista * lista
Retorno:
    retorna 1 se a lista estivar vazia
    retorna 0 se a lista não estiver vazia
*/
int verifica_lista(Lista * lista);


/*
Função que busca e imprime o elemento desejado pelo usuário
Argumentos:
    Lista * lista
    int valor
    Lista * procura
Retorna:
    Retorna procura
*/
int busca_elemento(Lista * lista, int valor);
