#include <stdio.h>

#include "matriz.h"

int main(void)
{
    while (1){
        //Indireção múltipla
        int col, lin;
        Matriz *mat; //receber o endereço de um ponteiro 

        printf("Informe a quantidade de colunas: \n");
        scanf("%d",&col);
        printf("Informe a quantidade de linhas: \n");
        scanf("%d",&lin);

        mat = cria_matriz(lin,col);
        
        printf("Numero de linhas : %d ", nlinhas(mat));
        printf("Numero de colunas : %d ", ncolunas(mat));
        atribuir_matriz(mat);
        acessa_matriz(mat);
        libera_matriz(mat);

        
    }
    return 0;
}
