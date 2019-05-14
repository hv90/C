#include <stdio.h>
#include <stdlib.h>



int abreFileLeitura(char path[], FILE *ptrR){

	  if((ptrR=fopen(path,"r")) == NULL){
	    printf("\nproblema na leitura do arquivo %s\n", path);perror(ptrR);exit(1);
	  }
	  return 1;
}

int abreFileEscrita(char path[], FILE *ptrR){


	  if((ptrR=fopen(path,"w")) == NULL){
	    printf("\nproblema na escrita do arquivo %s\n", path);perror(ptrR);exit(1);
	  }

	  return 1;
}
