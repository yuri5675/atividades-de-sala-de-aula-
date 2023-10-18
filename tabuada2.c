#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int numero;
    int i;

printf("escolha um numero:");
scanf("%d,  \n", &numero);

for ( i = 0; i <= 10; i++)
{
    printf("%d x %d = %d  \n", i, numero * i );


}

return 0;
}