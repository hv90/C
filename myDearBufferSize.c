#include <stdio.h>
#include <stdlib.h>

int main (void){
    unsigned long int limite = 2100000000;
                             //3907958692
    unsigned long int i = 0;
    long *ptr;

    while(i++ < limite){

        printf("%lu\n",i);ptr = (long*)malloc(limite*sizeof(long));
    }
}
