Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
// Se��o de Declara��es das vari�veis 
numero1: real
numero2: real
operacao: caractere
resultado: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva (" qual o primeiro numero?:")
leia( numero1 )

escreva (" qual segundo numero?:")
leia ( numero2 )

escreva (" qual opera��o deseja usar?:")
leia ( operacao )




  escolha operacao

 caso = "+"
 resultado <- numero1 + numero2
 
 caso = "-"
 resultado <- numero1 - numero2
 
 caso =  "*"
 resultado <- numero1 * numero2
 
 caso  "/"
 resultado <- numero1 / numero2
 
 fimescolha
 
 
 limpatela

 escreval( "numero1:", numero1)
 escreval ("numero2:", numero2)
 escreval(" opera�ao:", operacao)
 escreval(" o resultado �:", resultado )



Fimalgoritmo