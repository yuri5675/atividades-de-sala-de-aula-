#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int i;

    for ( i = 0; i <= 10; i++)
    {
        printf("5 x %d = %d  \n", i, 5*i);
    }    
        
        printf("\n");
         
    
         for ( i = 0; i <= 10; i++){

         

        printf("7x %d = %d  \n", i, 7*i);



        
    }

    return 0;
    
}