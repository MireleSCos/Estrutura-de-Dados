#ifndef _ARVORE_H
#define _ARVORE_H

typedef struct arv Arv;
typedef struct arvno ArvNo;

Arv* arv_cria(ArvNo * r);
ArvNo* arv_criano (char c, ArvNo * e, ArvNo * d);
void arv_libera (Arv* r);
void arv_imprime(Arv* r);
int arv_pertence (Arv* r, char c);
int arv_altura(Arv* r);

void libera(ArvNo * r);
void imprime(ArvNo * r);
int pertence(ArvNo * r, char c);
int max2 (int a, int b);
int altura (ArvNo* r);

#endif