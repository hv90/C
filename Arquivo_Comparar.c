#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* getLinha(char path[], int i);
int leituraContaLinhas(char path[]);

void mataRepetido(char path[]){
    int tam=leituraContaLinhas(path);
    char valorA[100], valorB[100];

    for(int i=1; i<tam; i++){
        strcpy(valorA, getLinha(path, i));
        for(int j=1; j<tam; j++){
            strcpy(valorB, getLinha(path, j));
            if(strcmp(valorA, valorB)!= 0){
                printf("%s != %s\n", valorA, valorB);
            }else{
                printf("%s == %s\n", valorA, valorB);
             }
        }
    }
}
