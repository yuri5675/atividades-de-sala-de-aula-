#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {


setlocale(LC_ALL, "portuguese");

float nota;
float media;
float soma = 0;
char resposta;
int contador = 0;

do
{
    printf("digite uma nota");
    scanf("%f", &nota);

    soma += nota;

    fflush(stdin);
    printf("deseja inserir mais uma nota?:");
    printf("s - sim \nN - Não \nresposta ");
    scanf("%c", &resposta);
} while (resposta != 'N');

media = soma / contador;

printf(" \nMedia; %.1f \n", media);

return 0;

}

