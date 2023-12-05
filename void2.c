#include<stdio.h>

int somar (int n1, int n2){

    int resultado;
    resultado = n1 + n2;

    return resultado;
}



int main() {

int primeironumero;
int segundonumero;
int soma;

printf("\n================\n");
printf("\tSenai");
printf("\n===================\n");
printf("digite o perimero numero:");
scanf("%d", & primeironumero);

printf("digite on segundo numero");
scanf("%d", &segundonumero);
soma = somar (primeironumero,segundonumero);

printf("\n=======================\n");
printf("\tsenai");
printf("primeiro numero %d \n", primeironumero);
printf("sengudo numero %d \n", segundonumero);
printf("soma: %d\n", soma);

return 0; 

}