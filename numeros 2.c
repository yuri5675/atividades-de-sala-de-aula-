#include <stdio.h>

int main() {


    int numeros [10];
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("digite o %dº numero:", i + 1);
        scanf("%d", &numeros[i]);

    }
    
    printf(" \n exibindo numeros.... \n");

    for ( i = 0; i < 10; i++)
    {
        printf("%dº numero: %d\n", i + 1, numeros[i]);
    }
    
    return 0;
}