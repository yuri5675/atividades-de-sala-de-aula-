Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/09/2023
Var
// Seção de Declarações das variáveis 
numero1: real
numero2: real
operacao: caractere
resultado: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva (" qual o primeiro numero?:")
leia( numero1 )

escreva (" qual segundo numero?:")
leia ( numero2 )

escreva (" qual operação deseja usar?:")
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
 
 escreva( " o resultado é:", resultado )



Fimalgoritmo