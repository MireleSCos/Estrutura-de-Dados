
#ifndef _VETOR_H_
#define _VETOR_H_

typedef struct vetor Vetor;

Vetor * cria_vetor(int dim);
int insere_vetor(Vetor * vet, int x);
int tamanho_vetor(Vetor * vet);
int acesse_vetor(Vetor * vet, int pos);
void libera_vetor(Vetor * vet);

#endif