#include<stdio.h>
#include<stdlib.h>

int main() {

int i=0, num[6], numtemp;

do
{
    printf("digite um numero inteiro:");
    scanf("%d", &numtemp);

    if (numtemp%2==0 && numtemp!= 0){
        num[i]=numtemp;
        i++;
    }
    
} while (i<0);

for ( i = 5; i >= 0; i--)
{
    printf("\n%d", num[i]);
}

return 0;



}