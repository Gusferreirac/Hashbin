#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "hash.h"

struct hash
{
    int m;
    Arvore **tree;
};

Hash *criaHash(int m)
{
    Hash *ha = (Hash *)malloc(sizeof(Hash));
    if (ha != NULL)
    {
        int i;
        ha->m = m;
        ha->tree = malloc(sizeof(Arvore *) * m);
        for (i = 0; i < m; i++)
        {
            ha->tree[i] = cria_arvore_vazia();
        }
    }
    return ha;
}

void insereHash(Hash *h, int chave)
{
    int position;
    position = chave % h->m;

    h->tree[position]->raiz = insere(h->tree[position]->raiz, chave);
}

void imprime(Hash *h, int position)
{
    pre_ordem(h->tree[position]->raiz);
}

void liberaHash(Hash *h)
{
    if (h != NULL)
    {
        int i;
        for (i = 0; i < h->m; i++)
        {
            if (h->tree[i] != NULL)
            {
                destroi(h->tree[i]->raiz);
            }
        }
        free(h->tree);
        free(h);
    }
}
