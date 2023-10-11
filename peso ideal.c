#include <stdio.h>
#include <stdlib.h>

int main() {

char sexo;
float peso;
float altura;



printf("qual seu sexo?: \n");
scanf("%c", &sexo);


printf ("qual sua altura?: \n ");
scanf("%f", &altura);

sexo = toupper(sexo);

switch (sexo) {

    case 'm':
    peso = (72.7 * altura ) - 58;
     printf("seu peso é: %f", peso);
     break;

     case 'f':
     peso = (62.1 * altura) - 44.7;
     printf ("seu peso é: %f", peso);
     break;

    return 0; 

}


}