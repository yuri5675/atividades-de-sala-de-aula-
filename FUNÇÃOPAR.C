#include<stdio.h>
#include<stdlib.h>

int numero;

void numero1 (int n1) {


if (n1 % 2==0)
{
    printf ("par");
}
else
{
   printf("impar");
}

}

int main (){


int numero;


printf("digite um numero");
scanf (" %d", &numero);


numero1(numero);


return 0;
}