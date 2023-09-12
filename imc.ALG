Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/09/2023
Var
// Seção de Declarações das variáveis 
peso: real
altura: real
imc: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   escreva (" qual seu peso?:")
   leia( peso )
   
   escreva (" qual sua altura ?:")
   leia( altura )
   

   
   imc <- peso/ altura * altura
   
    escreval ( "imc", imc )
   
   se ( imc < 18.5 ) entao
   escreva ( " voce está abaixo do peso )
   
   senao
   
   se ( imc <= 24.9 ) entao
   escreva ( "peso ideal, parabens")
   
   senao

   se (imc <= 29.9) entao
   escreva ( "levemente acima do peso")
   
   senao
   
   se ( imc <= 34.9 ) entao
   escreva ( " obesidade grau 1")
   
   senao


   se ( imc <= 39.9 ) entao
   escreva( " obsesidade grau 2 ")
   
   senao
   
   se ( imc > 40 ) entao
   escreval ( "obseidade 3")

   
   fimse
   fimse
   fimse
   fimse
   fimse
   fimse
   
   

   
   
   
   


Fimalgoritmo