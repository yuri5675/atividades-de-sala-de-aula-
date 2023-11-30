#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main () {
setlocale (LC_ALL,"portuguese");

struct dados_livro
{
    char nome[200];
    char autor[200];
    char categoria [500];
    float preco;

};

struct dados_livro livro [3]; 
int i;
{
   for ( i = 0; i < 3; i++)
   {
    printf(" digite o nome:");
    gets(livro[i].nome);

    printf(" autor:");
    gets(livro[i].autor);

    printf("categoria:");
    gets(livro[i].categoria);

    printf("preco:");
    scanf("%f\n",&livro[i].preco );
   }
   
  fflush(stdin);


};

for ( i = 0; i < 3; i++)
{
    printf("nome do livro ", livro[i].nome );
printf(" Autor: %s\n", livro[i].autor);
printf("Categoria: %s\n", livro[i].categoria);
printf("Preco: %f\n", livro[i].preco);

}


return 0;

}