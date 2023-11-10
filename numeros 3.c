#include <stdio.h>
#include<stdlib.h>

int main() {


    int notas [4];
    int i;
    float media;
    

    for ( i = 0; i < 4; i++)
    {
        printf("digite o %dº numero:", i + 1);
        scanf("%d", &notas[i]);

    }
    
    printf(" \n exibindo numeros.... \n");

    for ( i = 0; i < 4; i++)
    {
        printf("%dº numero: %d\n", i + 1, notas[i]);
    }

 media = (notas[0] + notas[1] + notas[2]+ notas[3]) / 4;
 printf("media:%2.f \n",media );

if (media >=7)
{
    printf("aprovado" );
}

if (media <= 5)
{
    printf("recuperção");

}

if (media < 5)
{
    printf("reprovado");
}

return 0;




}