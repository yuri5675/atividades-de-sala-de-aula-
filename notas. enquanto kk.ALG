Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/09/2023
Var
// Seção de Declarações das variáveis 
   resposta: caractere
   i: inteiro
   soma: real
   media: real
   nota: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
enquanto ( resposta <>  "não") FACA
 escreva (" digite a " ,i + 1, " ª nota:")
 leia ( nota )
 
 soma <- soma + nota
 i <- i + 1
 
 escreval (" deseja inserir mias uma nota?:")
 leia( resposta )
 
 fimenquanto
 
 media <- soma / i
 
 escreval (" quantidade de notas", i )
 escreval (" soma das notas ", soma )
 escreval (" media", media )

Fimalgoritmo