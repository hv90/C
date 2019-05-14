/*
 * Arquivo_Escreve.c
 *
 *  Created on: 30 de mai de 2018
 *      Author: hugo-m182
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void escreve(char path[], char conteudo[]){
  FILE* ptrW;

  if((ptrW=fopen(path, "a"))==NULL){
    perror("problemas na escrita\n");exit(1);
  } else {
      printf("Escrevendo %s\n", conteudo);
      fprintf(ptrW, "%s\n", conteudo);
   }
  fclose(ptrW);
}
