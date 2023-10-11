#include <stdio.h>
#include <stdlib.h>

int main(){

int codigo;

printf("--------------MENU --------------. \n" );
  printf ("");
 printf( " 1 - picanha   R$: 25,00. \n");
  printf (" 2 - lasanha   R$: 20,00. \n");
 printf (" 3 - strogonoff R$: 18,00. \n");
 printf (" 4- bife acebolado R$: 55,00. \n ");
  printf ("5 - pão com ovo R$: 5,00. \n ");
printf("");
 printf(" -------------- FIM---------------. \n");





printf(" escolha uma opcao: ");
scanf("%d", codigo);

switch (codigo){

    case 1:
    printf("- picanha   R$: 25,00.");
    break;

    case 2:
    printf("lasanha   R$: 20,00");
    break;

    case 3:
    printf("strogonoff R$: 18,00");
    break;

    case 4:
    printf("bife acebolado R$: 55,00");
    break;

    case 5:
    printf(" pão com ovo R$: 5,00");
    break;

    default:
    printf (" invalido ");


return 0;
}


}