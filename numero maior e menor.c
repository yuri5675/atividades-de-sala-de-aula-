#include<stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    int maior, menor;
int primeironumero, segundonumero, terceironumero;

printf("digite o primeiro numero: ");
scanf("%d", &primeironumero);

printf("digite o segundo numero:");
scanf("%d", &segundonumero);

printf("digite o terceiro numero:");
scanf("%d", &terceironumero);

// operação ternaria 

maior = primeironumero > segundonumero ? primeironumero : segundonumero;
maior = terceironumero ? maior : terceironumero;

menor = primeironumero < segundonumero ? primeironumero : segundonumero;
menor = menor < terceironumero ? menor : terceironumero;

printf ("\nmaior numero : %d  \n ", maior );
printf("menor numero %d  \n", menor );

return 0;
}


