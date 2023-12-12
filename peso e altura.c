#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {

float altura;
float peso;
float imc;

printf("\ndigite sea altura:");
scanf("%f",&altura);

printf("digite seu peso:");
scanf("%f", &peso);

imc= peso / (altura * altura);

system( "cls|| clear");


printf(" \naltura: %f", altura);
printf("\npeso: %f", peso);
printf("\nimc %f", imc);


return 0;


}