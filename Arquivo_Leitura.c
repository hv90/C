/**************************************************************************************************************
 * Arquivo_Leitura.c
 *
 *  Created on: 30 de mai de 2018
 *      Author: hugo-m182
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *ptrR, *ptrR2;
char escritaPath[]="filtro_Artistas.txt";
char listaFiltro[100];
char lista[255];
char atual[100];
int linha1=0;
int linha2=0;
char valorSalvo[100];


FILE* fAbreLeitura(char path[], FILE *ptrR){
	  if((ptrR=fopen(path,"r")) == NULL){
	    perror("\nproblema na leitura");exit(1);
	  }printf("abriu corretamente, txt: %s\n",path);
	  return ptrR;
}

int leituraContaLinhas(char path[]){
    ptrR = fAbreLeitura(path, ptrR);
    while(!feof(ptrR)){
        fgets(atual, 100, ptrR);
        linha1++;
    }
    rewind(ptrR);
    return linha1;
}

char* getLinha(char path[], int linhaDesejada){
int linha=0;
 ptrR=fAbreLeitura(path, ptrR);
 while(!feof(ptrR)){
        fgets(atual, 100, ptrR);
        atual[strlen(atual)]='\0';
        linha++;
        if(linha-linhaDesejada == 1){
            //printf("Valor encontrado: %s\n", atual);
            break;
        }
    }
    fclose(ptrR);
    return atual;
}
