#include <stdio.h>
#include <time.h>



int sorteia(int limite){
  srand((unsigned int) time(NULL));
  return rand()%limite;
}
