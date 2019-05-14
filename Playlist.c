/*
 * Principal.c
 *
 *  Created on: 2 de jun de 2018
 *      Author: hugo-m182
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "Arquivo_Comparar.c"
//#include "Arquivo_Escrever.c"
//#include "Arquivo_Leitura.c"
//#include "Arquivo_Sortear.c"

int main(){
	char path[]= "spotify.txt";
	int linha=0;printf("comecando a leitura\n");
	linha=leituraContaLinhas(path);printf("total de linhas: %d\n",linha);
    linha=sorteia(linha);printf("linha sorteada: %d\n",linha);
    printf("linha %d: %s\n",linha, getLinha(path, linha));
//      mataRepetido(path);
    return 0;
}
