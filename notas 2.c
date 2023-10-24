#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {


setlocale(LC_ALL, "portuguese");


float nota1;
float nota2;
float media;


do
{
    printf("qual sua primeira nota?:");
    scanf("%f", &nota1);
    
    printf("qual sua segunda nota?:");
    scanf("%f", &nota2);
}
    


while (nota1 < 0 || nota1 > 10);
{
}
while (nota2 < 0 || nota2 >10);
{   
}

media = (nota1 + nota2) / 2;

printf("media %2f   \n ", media );

return 0;



}
