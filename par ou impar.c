#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

int numero;

    printf("digite io numero:");
    scanf("%d", &numero);

    if (numero % 2 == 0) {


printf("� par");

    } else {

        printf("n�o �  par ");
    }

    return 0;



}