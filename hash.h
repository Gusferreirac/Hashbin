typedef struct hash Hash;

Hash *criaHash(int m);
void insereHash(Hash *h, int chave);
void imprime(Hash *h, int position);
void liberaHash(Hash *h);