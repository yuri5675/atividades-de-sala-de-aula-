#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main () {
setlocale (LC_ALL,"portuguese");

struct dados_usuario 
{
    char nome[500];
    int idade;
    float notas [2];

};

struct dados_usuario usuario [3];
int i,j;
{
    for ( i = 0; i < 3; i++)
    {
        printf("digite seu nome:");
        gets(usuario[i].nome);

        printf("digite sua idade:");
        scanf("%d\n", &usuario[i].idade);



for ( j = 0; j < 2; j++)
{
     printf("digite sua nota");
        scanf("%f\n", &usuario[i].notas[j]);
}

       
    }

fflush(stdin);    
};

for ( i = 0; i < 3; i++)
{
    printf("Nome:", usuario[i].nome);
    printf("Idade: %d\n", usuario[i].idade);
    printf("Nota: %f\n ",usuario[i].notas );
}

return 0;

}