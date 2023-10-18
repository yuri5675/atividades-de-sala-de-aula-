#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

int numero;

    printf("digite io numero:");
    scanf("%d", &numero);

    if (numero % 2 == 0) {


printf("é par");

    } else {

        printf("não é  par ");
    }

    return 0;



}