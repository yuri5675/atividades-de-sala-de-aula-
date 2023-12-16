#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){

    setlocale( LC_ALL,"portuguese");

int codigo;
char titular;
char tipodeconta;
float saldo;
float Deposito;
float Saque;
float valorfinal;
int confirmacao;
float Depositot;
float Saquet;

printf ("\n--------------Cadastro--------------\n");
printf("\n Nome do titular:");
scanf("%s", &titular);
printf("\ntipo de conta:\n(corrente ou poupança)\n");
scanf("%s",&tipodeconta);
printf("\n saldo atual:");
scanf("%f",&saldo);


printf("-------------------------------------");

printf("escolha uma opcao");


printf("---------opçoes---------");
printf(" \n1-Deposito");
printf("\n2-Saque");
printf("\n3- Extrato");
printf("\n4- Encerrar operação");

printf(" Informe a opção que deseja");


do
{
    
switch (codigo)
{
case 1:
    printf("\nQuanto deseja depositar ?:");
    scanf("\n %f", &Deposito);
    valorfinal = saldo + Deposito;
    Depositot += Deposito;
break;

case 2:
printf(" \nQuanto deseja sacar");
scanf("%f", &Saque);
valorfinal = saldo - Saque;
Saquet += Saque;
break;

case 3:
printf("\n Valor final %d");
break;

printf("Deseja fazer mais uma operação?\n 1- sim  2- Não");
scanf("%d",&confirmacao);


}



}while (codigo == 1);


system ("cls || clear");



printf ("\nNome do titular:%S", titular);
printf ("\nTipo de conta: %s", tipodeconta);
printf ("\nsaldo atual %f", valorfinal);
printf("total depositado: %f", Depositot);
printf(" saque final %f", Saquet);











return 0;
}