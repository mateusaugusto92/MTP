#include <stdio.h>
#include <stdlib.h>
int main (){
    float vet [10];
    int i,j,a;
    printf("Digite dez numeros:\n");
    for (i=0; i<10;i++)
        scanf("%f", &vet[i]);
    printf("O vetor digitado e': [");
     for (i=0; i<10;i++)
    printf("%g " , vet[i]);
    printf("]\n");

     for (j=0,i=9;j<5;j++,i--)
{
    a=vet[j];
    vet[j]=vet[i];
    vet[i]=a;
}
    printf("O vetor invertido e': [");
     for (j=0; j<10;j++)
    printf("%g " , vet[j]);
    printf("]\n");

return 0;}
