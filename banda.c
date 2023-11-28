#include<stdio.h>
#include<string.h>

int main () {

char banda [3] [200];
char integrantes [3][5] [200];
int i ;
int j;

for ( i = 0; i < 3; i++)
{
    printf("digite o nome da banda:");
    gets(banda[i]);


    for ( j = 0; j < 5; j++)
    {
        printf("digite o nome de dos integrantes:");
        gets(integrantes[i][j]);
    }

    fflush(stdin);
}
    
    system("cls || clear");
    printf(" \nexibindo dados da banda");

    for ( i = 0; i < 3; i++)
    {
        printf("\nNome da banda: %s \n", banda [i]);
        for ( j = 0; j < 5; j++)
        {
            printf("\nNome dos integrantes: %s \n", integrantes[i][j]);
        }
        
    }
    
    
return 0;
    
}


