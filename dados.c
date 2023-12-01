#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {

setlocale(LC_ALL,"portuguese");

struct dados_pessoa 
{
    char nome[200];
    char datadenascimento[200];
    int RG;
    int cpf;


};



struct dados_pessoa pessoa[5];
int i;

for ( i = 0; i < 5; i++)
{
 printf(" \ndigite seu nome ");
 gets(pessoa[i].nome);



 printf("\ndigite sua data de nascimento: ");
 gets(pessoa[i].datadenascimento);

 printf("\ndigite seeu rg:");
 scanf("%d", &pessoa[i].RG);

 printf("\ndigite seu cpf:");
 scanf("%d", &pessoa[i].cpf);
 
fflush(stdin);
}

for ( i = 0; i < 5; i++)
{

printf("nome:  %s\n" ,pessoa[i].nome);
printf("data de nascimento: %s\n",pessoa[i].datadenascimento  );
printf("RG: %d\n",pessoa[i].RG);
printf("cpf: %d\n", pessoa[i].cpf);



}
 return 0;

}
