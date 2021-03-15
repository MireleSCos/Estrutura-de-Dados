#include <stdio.h>
#include <stdlib.h> 

int main (void) {
  while (1){
    //Indireção múltipla
    int col, lin;
    int **matriz; //receber o endereço de um ponteiro 

    printf("Informe a quantidade de colunas: \n");
    scanf("%d",&col);
    printf("Informe a quantidade de linhas: \n");
    scanf("%d",&lin);

    matriz = (int **)  calloc(lin,sizeof(int));

    for (int i = 0; i < lin; i++)
    {
      matriz[i] = (int *)  calloc(col,sizeof(int));
    }

    for ( int i=0; i< lin; i++ ){
      for (int j=0; j< col; j++ )
      {
        printf ("\nElemento[%d][%d] = ", i, j);
        scanf ("%d", &matriz[ i ][ j ]);
      }
    }
    printf("\n Valores da matriz : \n ");
    for (int i=0; i<lin; i++ ){
      for (int j=0; j<col; j++ )
      {
        printf ("%d  ",matriz[ i ][ j ]);
      }

      printf("\n");
    }
    printf("\n");


    for (int i = 0; i < lin; i++) {
      free (matriz[i]); /* libera as linhas da matriz */
    }
    free (matriz);
  }
  return 0;
}