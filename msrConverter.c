#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float valorA, valorB;

void ft2cm(float feet){
    printf("%f feet = %f cm\n", feet, feet*30.48);
}

void inch2cm(float inch){
    printf("%f inch = %f cm\n", inch, inch*2.54);
}

void yard2cm(float yard){
    printf("%f yard = %f cm\n", yard, yard*91.44);
}

void oz2gr(float oz){
    printf("%f oz = %f gr\n", oz, oz*28.35);
}

void pounds2gr(float pounds){
    printf("%f pounds = %f gr\n", pounds, pounds*453.60);
}

void soma(float a, float b){
    printf("%f + %f = %f \n", a, b, a+b);
}

void menu(int opcao){
    switch(opcao){
        case 1:
            printf("Qual o valor? ");
            scanf("%f", &valorA);
            inch2cm(valorA);
            break;
        case 2:
            printf("Qual o valor? ");
            scanf("%f", &valorA);
            yard2cm(valorA);
            break;
        case 3:
            printf("Qual o valor? ");
            scanf("%f", &valorA);
            ft2cm(valorA);
            break;
        case 4:
            printf("Qual o valor? ");
            scanf("%f", &valorA);
            oz2gr(valorA);
            break;
        case 5:
            printf("Qual o valor? ");
            scanf("%f", &valorA);
            pounds2gr(valorA);
            break;
        case 6:
            printf("Qual o valor? ");
            scanf("%f%f", &valorA, &valorB);
            soma(valorA, valorB);
            break;
    }
}

void printOpcoes(){
    printf("\n\n\nBem-vindX ao Conversor de Medidas\nEscolha uma das opcoes abaixo:\n1 - inch2cm\n2 - yard2cm\n3 - feet2cm\n4 - oz2gr\n5 - pounds2gr\n6 - soma simples(a+b)\n\n");
}

int main(){

    int opcao;
    char continuar[]="S";
    do{
        printOpcoes();
        scanf("%d",&opcao);
        menu(opcao);
        printf("Deseja continuar?(s\\n) ");
        scanf("%s",continuar);
        strupr(continuar);
    }while(!strcmp(continuar,"S"));
    return 0;
}
