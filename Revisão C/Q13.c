#include "stdio.h"
#include "stdlib.h"

int isAlpha(char c) {
  if(c >= 48 && c <= 57) { // [0-9]
    return 1;
  }

  if(c >= 65 && c <= 90) { // [A-Z]
    return 1; 
  }

  if(c >= 97 && c <= 122) { // [a-z]
    return 1;
  }

  return 0;
}

int main(void) {
    int *map = (int *)calloc(128, sizeof(int));
    int i = 0;


    char test[1000];

    printf("Informe os caracteres: ");
    fgets(test, sizeof(test), stdin);

    char tmp;

    do {
        tmp = test[i++];
        if (isAlpha(tmp)) {
            map[tmp]++;
        }
    } while (tmp != '\0');

    for (i = 0; i < 128; i++) {
        if (map[i] != 0) {
            printf("%c = %d\n", i, map[i]);
        }
    }

    return 0;
}