#ifndef ARVORE_H
#define ARVORE_H

struct no
{
    struct no *esq;
    struct no *dir;
    int chave;
};

typedef struct no No;

struct arvore
{
    No *raiz;
};

typedef struct arvore Arvore;

Arvore *cria_arvore_vazia();
No *cria_no(int);
No *insere(No *, int);
No *busca(No *, int);
void pre_ordem(No *);
void pos_ordem(No *);
void ordem_central(No *);
void destroi(No *);

#endif