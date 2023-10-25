#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

int numero;
int soma = 0;
int quantidade =0;
float media;


do
{
    printf("digite o %dº numero:", quantidade + 1);
    scanf("%d",&numero);

    if (numero > 0) {
        soma += numero;
        quantidade++;
    }
    
} while (numero > 0);

media = soma / (float)quantidade; // cast
printf("media: %.1f \n", media);

return 0;




}
