#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float imc ( float n1, float n2){

    float reusltado;

    reusltado = n1 / (n1 * n2);

    return reusltado;
}

void taxa (float imc){

    if (imc < 18.5)
    {
        printf("abaixo do peso");

    }
    
    if (imc < 18.5 && imc >= 25.5)
    {
        printf("peso normal");

    }


    if ()
    {
        /* code */
    }
        
}