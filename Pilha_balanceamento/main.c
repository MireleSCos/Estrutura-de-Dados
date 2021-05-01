#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

  Pilha * s = pilha_cria();// vai armazenar a string a ser avaliada
 
  //armazenar da direita para esquerda  ex1 : [{()()}{}] - Balanceada = 1 
  /* pilha_push(s, ']');
  pilha_push(s, '}');
  pilha_push(s, '{');
  pilha_push(s, '}');
  pilha_push(s, ')');
  pilha_push(s, '(');
  pilha_push(s, '{');
  pilha_push(s, '['); */

  //armazenar da direita para esquerda  ex1 : {[(}]) - Não é Balanceada = 0 
  /* pilha_push(s, ')');
  pilha_push(s, ']');
  pilha_push(s, '}');
  pilha_push(s, '(');
  pilha_push(s, '[');
  pilha_push(s, '{'); */

  //armazenar da direita para esquerda  ex1 : {[([{}])]} - Não é Balanceada = 1
  pilha_push(s, '}');
  pilha_push(s, ']');
  pilha_push(s, ')');
  pilha_push(s, ']');
  pilha_push(s, '}');
  pilha_push(s, '{');
  pilha_push(s, '[');
  pilha_push(s, '(');
  pilha_push(s, '[');
  pilha_push(s, '{'); 

  //armazenar da direita para esquerda  ex1 : "{[)()(]} - Não é Balanceada = 0
  /* pilha_push(s, '}');
  pilha_push(s, ']');
  pilha_push(s, '(');
  pilha_push(s, ')');
  pilha_push(s, '(');
  pilha_push(s, ')');
  pilha_push(s, '[');
  pilha_push(s, '{'); */


  printf("A espressão é balanceada ? %d",formacao(s));

  //printf("Retirar valor %c", pilha_pop(s));

  return 0;
}