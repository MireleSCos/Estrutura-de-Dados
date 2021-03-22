
#ifndef _NUMCOMPLEXO_H_
#define _NUMCOMPLEXO_H_

typedef struct numComplexo NumComplexo;

NumComplexo * cria_complexo(int a, int b);
void libera_complexo(NumComplexo * nc);
int get_complexo(NumComplexo * nc, int *a, int *b);
int set_complexo(NumComplexo * nc,int a, int b );
NumComplexo * soma_complexo(NumComplexo * nc1, NumComplexo * nc2);
NumComplexo * sub_complexo(NumComplexo * nc1, NumComplexo * nc2);
NumComplexo * mult_complexo(NumComplexo * nc1, NumComplexo * nc2);
NumComplexo * div_complexo(NumComplexo * nc1, NumComplexo * nc2);

#endif