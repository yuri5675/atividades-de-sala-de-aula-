#include<stdio.h>
void cabecalho() {
printf("\n=========================\n");
printf("\tSenai");
printf("\n=========================\n");





}

void limpatela() {

    fflush(stdin);
    system("cls || clear");

}

void mostraridade(int idade){
    printf("\nidade: %d",idade);
}





int main (){

char nome[200];
int idade;

 cabecalho();

printf("\ndigite seu nome:");
gets(nome);
limpatela();


cabecalho();
printf("\ndigite sua idade:");
scanf("%d ", &idade);
limpatela();

cabecalho();
printf("\nNome:%s", nome);

mostraridade(idade);


return 0;



}