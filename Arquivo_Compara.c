//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//FILE *ptrR1;
//char txtLeitura[]="teste_escrita.txt";
//char stringCMP[200];
//int i=0;
//
//int isRepetido(char stringSRC[])
//{
//    if((ptrR1=fopen(txtLeitura,"r")) == NULL)
//    {
//        printf("\nproblema na leitura do arquivo %s\n", txtLeitura);
//        printf("Error: %d (%s)\n", errno, strerror(errno));
//        exit(1);
//    }
//    else
//    {
//i=0;
//            while(!feof(ptrR1))
//            {
//                printf("comparando %d\n", i++);
//                fgets(stringCMP, 200, ptrR1);
//                if(strcmp(stringCMP, stringSRC)==0)
//                {
//                    //printf("%s == %s\n", stringSRC, stringCMP);
//                    return 1;
//                }
//                //printf("%s != %s\n", stringSRC, stringCMP);
//            }
//        //fflush(ptrR1);
//
//        if(fclose(ptrR1)==0){
//            printf("fclose funcionou\n");
//        }else{
//            printf("SOCORRO! %d\n", i);
//        }
//        return 0;
//    }
//}
