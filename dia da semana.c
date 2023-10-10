#include <stdio.h>
#include <stdlib.h>

int main(){

int dia;

printf ("digite o numero do dia: ");
scanf("%d", &dia );

switch (dia){

case 1:
printf ("domingo, nao ultil ");
break;

case 2:
printf(" segunda - feria, dia ultil ");
break;

case 3:
printf("terça feira, dia util ");
break;

case 4:
printf("quarta feira, dia ultil ");
break;

case 5:
printf(" quinta feira, dia ultil ");
break;

case 6:
printf("sexta feira, dia ultil ");
break;

case 7:
printf(" sabado, não ultil ");
break;



return 0;


}
}