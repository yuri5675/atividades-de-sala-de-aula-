#include<stdio.h>
#include<stdlib.h>



int soma (int n1, int n2) {
  
  int resultado = n1 + n2;
  return resultado;

}

int subtracao(int n1, int n2){
int resultado = n1 - n2;
return resultado;

}

int multiplicacao(int n1, int n2){

    int resultado = n1 * n2;
    return resultado;
}

float divisao(float n1, float n2){

int resultado = n1 / n2;
return resultado;
}

int main(){

    int numero1, numero2;
    int somaa;
    int multi;
    int sub;
    float divi;
    
    
    
    printf("\ndigite o perimero numero:");
    scanf("%d", &numero1);

    printf("digite o segundo numero:");
    scanf("%d",&numero2);

    somaa = soma(numero1, numero2);
    multi= multiplicacao(numero1, numero2);
    sub = subtracao(numero1, numero2);
     divi = divisao(numero1, numero2);

system("cls || clear");

printf("\nnumero: %d", numero1);
printf("\nnumero: %d", numero2);
printf("\nsoma %d",somaa);
printf("\nmultipicacao: %d", multi);
printf("\nsubtracao: %d", sub);
printf("\ndivisao: %f", divi);


return 0;


}