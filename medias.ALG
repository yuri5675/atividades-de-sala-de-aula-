Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/09/2023
Var
// Se��o de Declara��es das vari�veis 
nome: caractere
nota1: real
nota2: real
media: real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
 escreva (" qual seu nome:? ")
 leia( nome )

 escreva (" digite sua primera nota:?" )
 leia( nota1)

 escreva( " digite sua segunda nota:?")
 leia (nota2)
 
 media <- (nota1 + nota2) / 2
 
  se ( media >= 9 ) entao
  escreva ( "A, aprovado "  )
  
  senao
  
  se ( media >= 7.5) e (media  < 9 ) entao
  escreva ( "B, aprovado " )
  
  senao

  se ( media >= 6) e (media  < 7.5 ) entao
  escreva ( "C, Aprovado" )
  
  senao
  
  se ( media >= 4) e (media < 6 ) entao
  escreva ( "D, reporovado" )
  
  senao
  
  se ( media < 4 ) entao
  escreva ( "C, reprovado" )
  
  fimse
  fimse
  fimse
  fimse
  fimse
  
  
  

Fimalgoritmo