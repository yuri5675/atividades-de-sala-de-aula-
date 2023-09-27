# include <stdio.h>
# include <stdlib.h>

int main () {
    // declarando variaveis 

    int idade;
    float peso;
    char sexo;


    // solicitando dados para o usuario 
    printf ("digite sua idade: ");
    scanf(" %d", &idade);

    printf("digite seus peso:");
    scanf("%f",&peso);

    fflush(stdin); // limpa o cash 

    printf("informe qual seu sexo:");
    scanf("%c", &sexo );

    // exibindo dados do usuario 
    printf("idade: %d anos. \n", idade);
    printf("peso: %.3f kg. \n", peso );
    printf("sexo: %c \n",sexo);

// limpatela 


    return 0;

    
}