#include <stdio.h>
#include <stdlib.h>

int main () {

 float nota1;
 float nota2;
 float media;

 printf ("digite sua primeira nota:");
 scanf (" %f",&nota1);


 printf("digite sua segunda nota:");
 scanf(" %f", &nota2);

 media = (nota1 + nota2 ) / 2;

 printf (" sua media e: %f", media);

 // dados para o usuario 
 printf (" primeira nota: %1f \n ", nota1);
printf("segunda nota: %.1f  \n ", nota2);
printf("media:  %.1f  \n", media );

// condicioonal se e senão

if (media >= 7)
{
    printf("aprovado");

}

else
{

    printf("reprovado");
}


 return 0;


}